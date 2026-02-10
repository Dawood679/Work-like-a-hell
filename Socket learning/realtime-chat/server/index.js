const express  = require("express")
const {Server}  = require("socket.io")
const http = require("http")


const httpServer = http.createServer(express)
const io = new Server(httpServer, {
  cors: {
    origin: "*", // frontend URL
    methods: ["GET", "POST"],
    credentials: true
  }
})

const app = express()

const socketUser = {}


io.on("connection",(socket)=>{
    console.log("Connection is established now")

    socket.on("join",(data)=>{
        console.log("user is joined",data.username)
        socketUser[socket.id] = data.username
        console.log(socketUser)

        socket.emit("joined",{username:socketUser[socket.id],message:"User is joined"})

    })
    socket.on("sendMsg",(data)=>{
        io.emit("sendMsgtoUsers",{id:socket.id,msg:data.msg})
    })
})



httpServer.listen(3000,()=>{
    console.log("Server is running on this port")
})


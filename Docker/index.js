const express = require("express")
const app = express()


app.get("/",(req,res)=>{
    res.send("HI there ")
})


app.listen(3000,()=>{
    console.log("App is Running on this port")
})
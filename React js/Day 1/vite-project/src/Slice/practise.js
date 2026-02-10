import {createSlice} from "@reduxjs/toolkit"
import {createAsyncThunk} from "@reduxjs/toolkit"




export const fetchdata = createAsyncThunk("practise/fetchdata",async (_)=>{
    const response = await fetch("https://jsonplaceholder.typicode.com/posts")
    const data = await response.json()
    console.log(data)
    return data
})
const practiseSlice = createSlice({
    name:"practise",
    initialState:{
        value:null
    },
    reducers:{},
    extraReducers:(builder)=>[
        builder.addCase(fetchdata.fulfilled,(state,action)=>{
            state.value = action.payload
        })
    ]

})


export default practiseSlice.reducer
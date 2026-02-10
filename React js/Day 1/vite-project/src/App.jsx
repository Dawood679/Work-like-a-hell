

import {useSelector,useDispatch} from "react-redux"

import {fetchdata} from "./Slice/practise"
import { useEffect, useEffectEvent } from "react"
export default function App(){

  const dispatch = useDispatch()
  const value = useSelector((state)=>state.practise.value)
  console.log("app is running")
  useEffect(()=>{
    dispatch(fetchdata())
  },[])
  return (<div>
   {JSON.stringify(value.length)}

    
  </div>)
}


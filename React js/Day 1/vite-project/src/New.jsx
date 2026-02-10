import {useSelector} from "react-redux"
export default function NewFun(){
    const value = useSelector((state)=>state.practise.value)
    return (<div>
        new component value is this : {value}
        </div>)
}
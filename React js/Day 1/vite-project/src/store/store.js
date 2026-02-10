import {configureStore} from "@reduxjs/toolkit"
import Practise from "../Slice/practise"

export const store = configureStore({
    reducer:{practise:Practise}
})
let obj = {
    name:"Dawood",
    age:12
}

for(let [key,values] of Object.entries(obj)){
    console.log(key,values)
}
const asyncWrapper = (fn) => (req, res, next) => Promise.resolve(fn(req, res, next)).catch(next);

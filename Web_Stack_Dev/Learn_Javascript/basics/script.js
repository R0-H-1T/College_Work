const food = require('./food.json')

const getPizzaData = async() =>{
    let response = await fetch('https://gist.github.com/kshirsagarps/36fade16fa39202715656ef487aaf7b0.js')  
    //console.log(response)
} 


getPizzaData()


console.log(food.Pizza[1].PizzaName, food.Pizza[1].Toppings)

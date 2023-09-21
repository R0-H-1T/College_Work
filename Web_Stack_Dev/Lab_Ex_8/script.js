
const fetchHandler = async() => {
    var categories = await fetch('https://fakestoreapi.com/products/categories')
    var categoryProducts = await fetch('https://fakestoreapi.com/products/category/jewelery?limit=3')
    categories = await categories.json()
    categoryProducts = await categoryProducts.json();
    console.log(categories, categoryProducts)
}



document.getElementById('fetchProducts').addEventListener('click',fetchHandler);
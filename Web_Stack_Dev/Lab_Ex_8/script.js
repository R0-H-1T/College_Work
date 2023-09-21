const randomNumbers = [];

var productTags = {
    'electronics': 'electronics',
    'jewelery': 'jewelery',
    "women's clothing": 'womensclothing',   
    "men's clothing": 'mensclothing'
}


const fetchHandler = async() => {
    console.log(await fetch('https://fakestoreapi.com/products/categories').then(res => res.json()))
    for(let i=0; i<10; i++){
        var div = document.createElement('div');
        const randomNumber = Math.floor(Math.random() * 20) + 1
        var product = await fetch(`https://fakestoreapi.com/products/${randomNumber}`)
        product = await product.json()
        console.log(productTags[product.category])
        div.innerHTML = `
                    <div class="card mb-3" style="max-width: 540px;">
                      <div class="row g-0">
                        <div class="col-md-4">
                          <img src="${product.image}" class="img-fluid rounded-start" alt="...">
                        </div>
                        <div class="col-md-8">
                          <div class="card-body">
                            <h5 class="card-title">${product.title}</h5>
                            <p class="card-text">${product.description}</p>
                            <p class="card-text">$${product.price}</p>
                            <a href="#">#${productTags[product.category]}</a>
                          </div>
                        </div>
                      </div>
                    </div>
        `;
        console.log(product.category)
        document.getElementById('demo').appendChild(div);
        // randomNumbers.push(Math.floor(Math.random() * 20) + 1);
    }
    // var categories = await fetch('https://fakestoreapi.com/products')
    // var categoryProducts = await fetch('https://fakestoreapi.com/products/category/jewelery?limit=3')
    // categories = await categories.json()
    // categoryProducts = await categoryProducts.json();
    // console.log(categories.length, categoryProducts)
}



document.getElementById('fetchProducts').addEventListener('click',fetchHandler);
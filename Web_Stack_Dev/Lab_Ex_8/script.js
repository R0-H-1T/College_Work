const randomNumbers = [];

var productTags = {
    'electronics': 'electronics',
    'jewelery': 'jewelery',
    "women's clothing": 'womensclothing',   
    "men's clothing": 'mensclothing'
}

var productsList = {};
 
const fetchHandler = async() => {
    // console.log(await fetch('https://fakestoreapi.com/products/categories').then(res => res.json()))
    document.getElementById('demo').innerHTML = '';
    var count = 1 ;
    for(let i=0; i<10; i++, count++){
        var div = document.createElement('div');
        const randomNumber = Math.floor(Math.random() * 20) + 1
        var product = await fetch(`https://fakestoreapi.com/products/${randomNumber}`)
        product = await product.json()
        productsList[productTags[product.category]+ count.toString()] = product;
        div.innerHTML = `
                    <div class="card mb-3" style="max-width: 90%;">
                      <div class="row g-0">
                        <div class="col-md-4">
                          <img src="${product.image}" class="img-fluid rounded-start" alt="...">
                        </div> 
                        <div class="col-md-8">
                          <div class="card-body">
                            <h5 class="card-title">${product.title}</h5>
                            <p class="card-text">${product.description}</p>
                            <p class="card-text">$${product.price}</p>
                            Tag: <a href="#">#${productTags[product.category]+ count.toString()}</a>
                          </div>
                        </div>
                      </div>
                    </div>
        `;
        document.getElementById('demo').appendChild(div);
        // randomNumbers.push(Math.floor(Math.random() * 20) + 1);
    }
    console.log(productsList)

    // cownsole.log(productsList[0]);
    // var categories = await fetch('https://fakestoreapi.com/products')
    // var categoryProducts = await fetch('https://fakestoreapi.com/products/category/jewelery?limit=3')
    // categories = await categories.json()
    // categoryProducts = await categoryProducts.json();
    // console.log(categories.length, categoryProducts)
}

 
const searchProduct = () => {
  const searchProduct = document.getElementById('inputProd').value;
  if(searchProduct == ''){
    document.getElementById('search-res').textContent = 'Nothing entered :)';
  }else{
    document.getElementById('demo2').innerHTML = '';
    document.getElementById('search-res').textContent = '';
    var div = document.createElement('div');
    const product =  productsList[searchProduct];
    if(product == undefined){
      document.getElementById('demo2').innerHTML = `<h4>No products found.</h4>`
    }
    if(product){
        div.innerHTML = `
        <div class="card mb-3" style="max-width: 90%;>
          <div class="row g-0">
            <div class="col-md-4">
              <img src="${product.image}" class="img-fluid rounded-start" style="max-width:300px;" alt="...">
            </div> 
            <div class="col-md-8">
              <div class="card-body">
                <h5 class="card-title">${product.title}</h5>
                <p class="card-text">${product.description}</p>
                <p class="card-text">$${product.price}</p>
              </div>
            </div>
          </div>
        </div>`
        document.getElementById('demo2').appendChild(div);
    }

  }
}


document.getElementById('fetchProducts').addEventListener('click',fetchHandler);
document.getElementById('searchProduct').addEventListener('click', searchProduct);

function clearFields(){
  document.getElementById('inputProd').value = '';
}

window.onload = clearFields;
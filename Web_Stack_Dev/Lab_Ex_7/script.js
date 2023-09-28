const unsplashObj = {
0:"https://images.unsplash.com/photo-1543002588-bfa74002ed7e?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1887&q=80",
1:"https://images.unsplash.com/photo-1544947950-fa07a98d237f?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1887&q=80",
2:"https://images.unsplash.com/photo-1509021436665-8f07dbf5bf1d?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1674&q=80",
3:"https://images.unsplash.com/photo-1476275466078-4007374efbbe?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1658&q=80",
4:"https://images.unsplash.com/photo-1588666309990-d68f08e3d4a6?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1885&q=80",
5:"https://images.unsplash.com/photo-1562232573-0305012a8818?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1635&q=80",
6:"https://images.unsplash.com/photo-1506880018603-83d5b814b5a6?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1674&q=80",
7:"https://images.unsplash.com/photo-1467951591042-f388365db261?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1740&q=80",
8:"https://images.unsplash.com/photo-1554672053-c4205442a9fb?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1635&q=80",
9:"https://images.unsplash.com/photo-1599893242842-1b723407f8c9?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1738&q=80"
}


const ajaxHandler = () => {
    var xhr = new XMLHttpRequest();

    xhr.open('GET', 'https://gist.githubusercontent.com/Richardtex22/04b9c712aa3b1371d296a739dafe14a7/raw/e49687d95377ff8748fd105642fed2af2bab30b5/books.json', true);

    xhr.responseType = 'json';
    xhr.onload = () => {
        const data = xhr.response;
        for(let i=0; i<10; i++){
            let div  = document.createElement('div');
                div.innerHTML = `
                <div class="card" style="width: 18rem;">
                <img src="${unsplashObj[i]}" class="card-img-top" alt="...">
                  <div class="card-body">
                    <h3 class="card-title">${data[i].title}</h3>
                    <h5 class="card-title">By <b>${data[i].author} </b></h5>
                  </div>
                    <ul class="list-group list-group-flush">
                        <li class="list-group-item">Country: <b>${data[i].country}</b></li>
                        <li class="list-group-item">Language: <b>${data[i].language}</b></li>
                    </ul>
                  <div class="card-footer text-body-secondary text-center">
                    Release Year: <b>${data[i].year}</b>
                  </div>
                </div>
                `;
            if(i%2 == 0){
                document.getElementById('demo').appendChild(div);
            }else if(i%2 == 1){
                document.getElementById('demo2').appendChild(div);
            }
        }

    }
    xhr.send();
}


document.getElementById('fetchBooks').addEventListener('click', ajaxHandler);
/*
document.getElementById('header').textContent = 'Works';

var xhr = new XMLHttpRequest();
xhr.open('GET', 'https://my-json-server.typicode.com/dmitrijt9/book-api-mock/books', true);

xhr.responseType = 'json';

xhr.onload = () => {
    //console.log(xhr.response); // will give raw json
    const data = xhr.response; //js object 
    console.log(data);
    data.forEach(dataitem => console.log(dataitem.author_id, dataitem.title, dataitem.releaseDate));
    data.forEach(dataitem => {
        let newElem = document.createElement('li');
        newElem.innerHTML = `Title: <b>${dataitem.title}</b><p>Author Id: ${dataitem.author_id}<br>Release Year: ${dataitem.releaseDate}</p>`;
        const myList = document.getElementById('demo');
        myList.appendChild(newElem)
    });
    // document.getElementById('demo').textContent = data;
}    
xhr.send();


let booklist = document.getElementById('bookList');
booklist.addEventListener('click', ajaxHandler)
*/



// const booksurl = "https://openlibrary.org/works/OL45804W.json"
// const books = fetch(booksurl);
// books
//   .then((response) => {
//     return response.json();
//   })
//   .catch(handleError);



async function logMovies() {
    const response = await fetch("https://raw.githubusercontent.com/benoitvallon/100-best-books/master/books.json");
    const movies = await response.json();
    movies.forEach(function(item) {
        console.log(item.author);
    });
}

logMovies()



  

// DUMMY APIs
//https://reqres.in/api/users?page=2
//https://dummy.restapiexample.com/api/v1/employees



document.getElementById('fetch').addEventListener('click', fetchHandler);


const sendHttpRequest = (method, url) => {
    var xhr = new XMLHttpRequest();

    xhr.open(method, url);

    xhr.responseType = 'json';
    xhr.onload = () => {
        var data = xhr.response;
        console.log(response);
    }
}


function fetchHandler(){
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
}


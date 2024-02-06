// fetch('https://reqres.in/api/users/')
//     .then(res =>res.json())
//     .then(data => console.log(data))


// fetch('https://reqres.in/api/users')
//     .then(res => res.json())
//     .then(data => {
//         data.data.forEach(element => {
//             console.log(element.email, element.first_name, element.last_name);
//         });
//     });

const fetchHandler = () => {
    fetch('https://dog.ceo/api/breeds/image/random')
    .then(res => res.json())
    .then(img => {
        console.log(img.message);
        var elem = document.createElement('img');
        elem.src = img.message;
        elem.style.height = '200px';
        elem.style.width = '200px';
        document.getElementById('demo').appendChild(elem);
    });

}

const jokesHandler = () => {
    fetch('https://v2.jokeapi.dev/joke/Any')
    .then(res => res.json())
    .then(data => {
        if(data.setup && data.delivery){
            var joke = document.createElement('li');
            joke.textContent = data.setup;
            joke.setAttribute('id', 'joke')
            var button = document.createElement('button');
            button.textContent = 'Ans';
            button.setAttribute('id', 'ansbtn')
            // button.setAttribute('class', 'btn btn-primary');
            joke.appendChild(button);
            document.getElementById('demo').appendChild(joke);
        
        }
        console.log(data.setup, data.delivery);
    })
    
}

const handler = () => {
    var xhr = new XMLHttpRequest();
    
    xhr.open('GET','https://dog.ceo/api/breeds/image/random',true);
    xhr.responseType = 'json'; 
    xhr.onload = () => {
        var data = xhr.response; 
        console.log(data.message);
        var my_img = document.createElement('img');
        my_img.src = data.message;
        if(document.getElementById('oldimg')){
            document.getElementById('demo').replaceChild(document.getElementById('oldimg'),() => { //gives and error
                my_img.setAttribute('id', 'oldimg');
                return my_img;
            })
        }else {
            my_img.setAttribute('id', 'oldimg');
            document.getElementById('demo').appendChild(my_img);
        }
    }
    xhr.send();
}
document.getElementById('fetch').addEventListener('click', jokesHandler)


// var xhr = new XMLHttpRequest();
//     xhr.open('GET', 'https://my-json-server.typicode.com/dmitrijt9/book-api-mock/books', true);

//     xhr.responseType = 'json';

//     xhr.onload = () => {
//         //console.log(xhr.response); // will give raw json
//         const data = xhr.response; //js object 
//         console.log(data);
//         // data.forEach(dataitem => console.log(dataitem.author_id, dataitem.title, dataitem.releaseDate));
        
//         // document.getElementById('demo').textContent = data;
//     }    
//     xhr.send();
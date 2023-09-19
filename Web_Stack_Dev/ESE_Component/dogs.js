function handleDog(){
    fetch('https://dog.ceo/api/breeds/image/random')
    .then(res => res.json())
    .then(data => {
        var imgTag = document.createElement('img');
        imgTag.src = data.message;
        imgTag.style.height = '400px';
        imgTag.style.height = '400px';
        imgTag.style.marginTop = '30px';
        document.getElementById('demo').innerHTML = '';
        document.getElementById('demo').appendChild(imgTag);
    })
}


document.getElementById('btn').addEventListener('click', handleDog);


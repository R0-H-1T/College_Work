// Date, Game, Calculate, getURL and fileExtension

function myDateFunc(){
    const days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
    const date = new Date();
    console.log('Today is: ',days[date.getDay()]);
    hours = date.getHours();
    var AmOrPm = hours >= 12 ? 'PM' : 'AM';
    hours = (hours % 12) || 12;
    var minutes = date.getMinutes();
    console.log("Current Time is: " + hours+" "+AmOrPm + ":" + minutes + ":" + date.getSeconds() );
    document.getElementById('challenge5').innerHTML =  "Current Time is: " + hours+" "+AmOrPm + ":" + minutes + ":" + date.getSeconds(); 
}


function playGame(){
    let guess  = prompt('Guess a number between 1 to 10');
    let randno = Math.floor((Math.random() * 10) + 1);
    console.log(randno);
    console.log(guess);
    let count = 0
    while(true){ 
        console.log(guess);
        if (randno == guess){
            document.getElementById('challenge1').innerHTML = 'Good Work';
            
            break;
        }else if(guess == 'q'){
            break;
        }
        guess = prompt('Wrong guess :(.\n Try Again :) or enter "q" for exit.');
        document.getElementById('challenge1').innerHTML = 'Not matched,\n'+ 'Count: '+count;
        count ++;
    }
}


function calculate(){
    const ma = document.getElementById('ma').value;
    const mb = document.getElementById('mb').value;
    const da = document.getElementById('da').value;
    const db = document.getElementById('db').value;

    document.getElementById('challenge2').innerHTML = 'Multiplication: '+ma*mb+'  Division: '+da*db;
}

function getURL(){
    document.getElementById('challenge3').innerHTML = 'Website URL is: '+window.location.href;
}

function getFileExtension(){
    document.getElementById('challenge4').innerHTML = 'File Extension is: '+document.getElementById('file_ex').value.split('.')[1];
}


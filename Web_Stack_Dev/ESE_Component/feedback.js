var user_name = document.getElementById('user_name')
var email = document.getElementById('email')
var comment = document.getElementById('comment')


function displayOutput(idname, bool, msg){
    idname.style.fontWeight = 'bold';
    if(bool){
        idname.innerHTML = '<span>&#x2713; Good</span>';
        idname.style.color = 'green';
    }else{
        idname.textContent = msg;
        idname.style.color = 'red' ;

    }
}


function handleUserName(){
    const nameRegex = /^[a-zA-Z\s]{3,}$/;
    displayOutput(
        document.getElementById('res_name'),
        nameRegex.test(user_name.value),
        'Must letters and atleast 3 characters long.');
}

function handleEmail(){
    const emailRegex = /^[a-zA-Z0-9/.]+@[a-zA-Z0-9/.]+\.[a-zA-Z0-9/.]+$/;
    displayOutput(
        document.getElementById('res_email'),
        emailRegex.test(email.value),
        'Invalid Email.'
    )
}

function handleComment(){
    document.getElementById('res_comment').style.fontWeight = 'bold';
    if(!comment.value){
        document.getElementById('res_comment').textContent = 'Pls enter your comment';
        document.getElementById('res_comment').style.color = 'red';

    }else{
        document.getElementById('res_comment').innerHTML = '<span>&#x2713; Good</span>';
        document.getElementById('res_comment').style.color = 'green';
        
    }
}


document.getElementById('user_name').addEventListener('change', handleUserName);
document.getElementById('email').addEventListener('change', handleEmail);
document.getElementById('comment').addEventListener('change', handleComment);


const resetInputFields = () => {
    document.getElementById('user_name').value = '';
    document.getElementById('email').value = '';
    document.getElementById('comment').value = '';
    
}

window.onload = resetInputFields;

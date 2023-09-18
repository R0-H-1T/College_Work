const resetInputFields = () => {
    document.getElementById('user_name').value = '';
    document.getElementById('email').value = '';
    document.getElementById('pass').value = '';
    document.getElementById('conf_password').value = '';
    document.getElementById('dob').value = '';
}


var user_name = document.getElementById('user_name');
var email = document.getElementById('email'); 
var password = document.getElementById('password'); 
var conf_password = document.getElementById('conf_password'); 
var dob = document.getElementById('dob');


const displayOutput = (idname, bool, message, eligiblity = null) => {
    idname.style.fontWeight = 'bold';
    if(bool){
        idname.innerHTML = '<span>&#x2713; Good</span>';
        idname.style.color = 'green';
    }else{
        idname.textContent = message;
        idname.style.color = 'red';
    }
    if(eligiblity!=null && bool){    
        span = document.createElement('span');
        span.style.color = 'yellow';
        if(eligiblity){
            span.innerHTML = '<br><span>Is Eligible.</span>';
        }else{
            span.innerHTML = '<br><span>Not Eligible.</span>';   
        }
        idname.appendChild(span);
    }
}


const nameHandler = () => {
    const nameRegex = /^[a-zA-Z/s]{3,}$/;
    displayOutput(
        document.getElementById('res_name'), 
        nameRegex.test(user_name.value), 
        'Must not contain special characters and should be more than 2 character long.'
    );
}
const emailHandler = () => {
    const emailRegex = /^[a-zA-Z0-9/.]+@[a-zA-Z0-9/.]+\.[a-zA-Z0-9/.]+$/
    displayOutput(
        document.getElementById('res_email'),
        emailRegex.test(email.value),
        'Invalid Email.'
    )
}
const passHandler = () => {
    const passRegex = /^[a-zA-Z0-9]{8,13}$/;
    displayOutput(
        document.getElementById('res_pass'),
        passRegex.test(pass.value),
        'Only alpha numeric. Must be min 8 characters long and max 12.'
    )   
}
const confPassHandler = () => {
    displayOutput(
        document.getElementById('res_conf'),
        pass.value == conf_password.value,
        'Password is not matching.'
    )
}
const dobHandler = () => {
    var currentDate = new Date();
    var user_data = new Date(dob.value);
    console.log(currentDate.getFullYear(), user_data.getFullYear())
    displayOutput(
        document.getElementById('res_dob'),
        currentDate.getFullYear() > user_data.getFullYear() && user_data.getFullYear()>1950,
        'Invalid Date',
        (currentDate.getFullYear() - user_data.getFullYear())<18? false:true
    )
}

const subHandler = () => {
    alert('Registeration Successfull');
}

document.getElementById('user_name').addEventListener('change', nameHandler)
document.getElementById('email').addEventListener('change', emailHandler)
document.getElementById('pass').addEventListener('change', passHandler)
document.getElementById('conf_password').addEventListener('change', confPassHandler)
document.getElementById('dob').addEventListener('change', dobHandler)
document.getElementById('sub').addEventListener('onclick', subHandler);


window.onload = resetInputFields;

const allEqual = arr => arr.every(val => val === arr[0]);
// let username = document.querySelector('#test1');
// let target = documet.querySelector('#test2');
// let target2 = documet.querySelector('#test3');

// username.addEventListener('change', updateValue)


// function updateValue(e) {
//     target.textContent = e.target.value;
//     target2.textContent = e.target.value;
// }


// let test1 = document.querySelector('#test1');
// let demo = document.querySelector('.demo');

// test1.addEventListener('change', (e) => {

//     const str = 'table football';
//     const regex = new RegExp('');
//     console.log(regex.test(str));
//     demo.innerHTML = e.target.value;
// })



// Full Name: Accepts alphabetic characters and spaces only, with a minimum length of 3 characters.
// Email Address: Should be a valid email format (e.g., "user@example.com").
// Password: Must be at least 8 characters long and contain a mix of letters and numbers.
// Confirm Password: Should match the password entered.
// Date of Birth: Requires a valid date in the format "YYYY-MM-DD" and the user must be at least 18 years old.



let user_name = document.getElementById('name');
let email = document.getElementById('email');
let pass = document.getElementById('password');
let confpass = document.getElementById('confirmPassword');
let dob = document.getElementById('dob');

let flag = [false, false, false, false, false];

// -------------------- FOR NAME -----------------------------------------
user_name.addEventListener('change', () => {
    const validCharactersRegex = /^[A-Za-z\s]{3,}$/;
    if (validCharactersRegex.test(user_name.value)) {
        document.getElementById('n_res').textContent = "Good!"; 
        document.getElementById('n_res').style.color = 'green';
        flag[0]=true
    } else {
        document.getElementById('n_res').textContent = "Invalid characters. Please use only letters and spaces.";
        document.getElementById('n_res').style.color = 'red';
    }
})

// -------------------- FOR EMAIL -----------------------------------------
email.addEventListener('change', () => {
    const validCharactersRegex = /^[a-zA-Z0-9\.]+@[a-zA-Z0-9\.]+\.[a-zA-Z0-9\.]+$/;
    if (validCharactersRegex.test(email.value)) {
        document.getElementById('e_res').textContent = "Good!"; 
        document.getElementById('e_res').style.color = 'green';
        flag[1]=true

    } else {
        document.getElementById('e_res').textContent = "Invalid email.";
        document.getElementById('e_res').style.color = 'red'
    }
})


// -------------------- FOR PASS-----------------------------------------
pass.addEventListener('change', () => {
    const validCharactersRegex = /^[a-zA-Z0-9]{8,10}$/;
    if (validCharactersRegex.test(pass.value)) {
        document.getElementById('p_res').textContent = "Good!"; 
        document.getElementById('p_res').style.color = 'green';
        flag[2] =true

    } else {
        document.getElementById('p_res').textContent = "Must be 8 characters long and contain letters and numbers only.";
        document.getElementById('p_res').style.color = 'red'
    }
})
confpass.addEventListener('change', () => {
    const matchpassword = document.getElementById('password').value;
    console.log(matchpassword, confpass.value)
    if (matchpassword == confpass.value) {
        document.getElementById('c_res').textContent = "Good!"; 
        document.getElementById('c_res').style.color = 'green'
        flag[3] =true

    } else {
        document.getElementById('c_res').textContent = "Password is not matching.";
        document.getElementById('c_res').style.color = 'red'
    }
})

//--------------------------------- FOR DATE ------------------------------------

dob.addEventListener('change', () => {
    const current_date = new Date();
    const user_date = new Date(dob.value);
    if(user_date > current_date || dob.getFullYear() < current_date.getFullYear() - 150){
        console.log(user_date);
        console.log(current_date.getFullYear(), user_date.getFullYear())
        let age = current_date.getFullYear() - user_date.getFullYear();
        if( age < 18){
            document.getElementById('d_res').textContent = "You are not 8 years old. :(";
            document.getElementById('d_res').style.color = "yellow";
        }else{
            document.getElementById('d_res').textContent = "You eligible.";
            document.getElementById('d_res').style.color = "green";
            if( allEqual(flag) && flag[0] == true){
                document.getElementById('subbutton').disabled = false;
            }

        }
    }else {
        document.getElementById('d_res').textContent = "Invalid Date.";
        document.getElementById('d_res').style.color = 'red'
    }
})

function resetInputFields() {
    document.getElementById("name").value = "";
    document.getElementById("email").value = "";
    document.getElementById("password").value = "";
    document.getElementById("confirmPassword").value = "";
    document.getElementById("dob").value = "";
}

// Call the reset function when the page loads
window.onload = resetInputFields;




months = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
years = ['jan', 'feb','mar', 'apr','may', 'jun','jul', 'aug', 'sep', '']


const str = '22/12/2001';
const nameRegex = new RegExp('^[\sa-zA-Z]{3,}$');
// console.log(regex.test(str));
// console.log(/[a-z]{3,}/.test(str))


const emailRegex = new RegExp("^[a-zA-Z0-9\.]+@[a-zA-Z0-9\.]+\.[a-zA-Z0-9\.]+$")
// console.log(emailRegex.test(str));


const passRegex = new RegExp("^\d+\.{8,10}$")
// console.log(passRegex.test(str));

const dateRegex = new RegExp("^\d{2}[/.\s]{1}\d{2}[/.\s]{1}\d{4}$");
const dateRegex1 = new RegExp("^\\d{2}[/\.]\\d{2}[/\.]\\d{4}$");

console.log(dateRegex1.test(str))



// let date1 = new Date();
// let date2 = new Date();
// if( date1 == date2 )    console.log('Yes is it greater ', date1);
// else console.log('Not greater ', date1, ' ',date2);

function isDateValid(dateString) {
    // Create a Date object from the input date string
    const dob = new Date(dateString);

    // Check if the Date object is valid and the input string represents a valid date
    if (isNaN(dob) || dob > new Date() || dob.getFullYear() < new Date().getFullYear() - 150) {
        return false; // Invalid date
    }

    return true; // Valid date
}

function isPersonAbove18(dateString) {
    // Create a Date object from the input date string
    const dob = new Date(dateString);

    // Calculate the age
    const currentDate = new Date();
    let age = currentDate.getFullYear() - dob.getFullYear();

    // Check if the birthday has occurred this year
    if (
        currentDate.getMonth() < dob.getMonth() ||
        (currentDate.getMonth() === dob.getMonth() && currentDate.getDate() < dob.getDate())
    ) {
        age--;
    }
    return age >= 18; // True if the person is 18 or older
}

const dateString = "12/26/2022"; // Replace with the date to be checked

if (isDateValid(dateString)) {
    if (isPersonAbove18(dateString)) {
        console.log("Date is valid, and the person is 18 years old or older.");
    } else {
        console.log("Date is valid, but the person is under 18 years old.");
    }
} else {
    console.log("Invalid date.");
}


const allEqual = arr => arr.every(val => val === arr[0]);

flag = [true, true, true, true, true, true];
console.log(allEqual(flag))
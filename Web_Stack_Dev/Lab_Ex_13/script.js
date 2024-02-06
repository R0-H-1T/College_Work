const mysql = require('mysql2');


const connection = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    database: 'test'
});



connection.query("CREATE DATABASE IF NOT EXISTS test", function (err, result) {
    if (err) throw err;
    console.log("Database created");
});

// var sql = "CREATE TABLE IF NOT EXISTS Employee  (name VARCHAR(255), sal INT(20));";
var sql1 = "CREATE TABLE IF NOT EXISTS hotel_reser ("
       +     "reservation_id INTEGER PRIMARY KEY AUTOINCREMENT,"
       +     "guest_name TEXT NOT NULL,"
       +     "check_in_date DATE NOT NULL,"
       +     "check_out_date DATE NOT NULL,"
       +     "room_type TEXT NOT NULL"
       +     ");";  

    //    console.log(sql1);
connection.query(sql, function (err, result) {
  if (err) throw err;
  console.log("Table created");
});

connection.query(sql1, function (err, result) {
    if (err) throw err;
    console.log("Hotel Reservation table created");
  });

// var sql = "INSERT INTO Employee (name, sal) VALUES ?";
// var data = [
//   ['pravin', '9000'],
//   ['jayesh', '5000'],
//   ['mounesh', '7000']
// ];

// connection.query(sql, [data] ,function (err, result) {
//   if (err) throw err;
//   console.log("record inserted");
// });


connection.query("SELECT * FROM Employee ORDER BY sal ASC", function (err, result, fields) {
  if (err) throw err;
  console.log(result);
});




connection.end()





function insertDB(){
    const guestName = document.getElementById("guestName").value;
    const checkInDate = document.getElementById("checkInDate").value;
    const checkOutDate = document.getElementById("checkOutDate").value;
    const roomType = document.getElementById("roomType").value;




}

document.getElementById('sub').addEventListener('click', insertDB);
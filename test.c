#include<bcrypt.h>
#include <sqlite3.h>
#include <stdio.h>
#include<string.h>

int main()
{
    sqlite3 *db;

    // open connection --------------------------------------------------------------->
    if (sqlite3_open("dummy.db", &db) != SQLITE_OK)
    {
        sqlite3_close(db);
        return 0;
    }

    // create table ------------------------------------------------------------------->
    // char *sql = "CREATE TABLE IF NOT EXISTS test("
    //             "id INTEGER PRIMARY KEY AUTOINCREMENT,"
    //             "username TEXT NOT NULL,"
    //             "password TEXT NOT NULL,"
    //             "salt TEXT NOT NULL);";

    // if (sqlite3_exec(db, sql, 0, 0, 0) != SQLITE_OK)
    // {
    //     printf("Not working, \n%s", sqlite3_errmsg(db));
    //     return 0;
    // }






    // insert into users --------------------------------------------------------------->
    const char *username = "bivas";
    const char *password = "b1234";

    char salt[BCRYPT_HASHSIZE];
    char hashed_password[BCRYPT_HASHSIZE];

    // generating salt
    bcrypt_gensalt(8, salt);
    const char *my_salt = salt;
    printf("My Salt:  %s\n", my_salt);
    // generating hash
    bcrypt_hashpw(password, salt, hashed_password);
    printf("Hashed Password: %s\n", hashed_password);
    const char *my_pass = hashed_password;

    // inserting record into test table --------------------------------------------------------->
    const char *sql = "INSERT INTO test (username, password, salt) VALUES (?, ?, ?);";

    // Prepare the SQL statement
    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, 0) != SQLITE_OK){
        printf("\nError: Failed to prepare statement\n");
    }

    if (sqlite3_bind_text(stmt, 1, username, strlen(username), SQLITE_STATIC) != SQLITE_OK){
        printf("\nError: Failed to bind username\n");
        sqlite3_finalize(stmt);
    }

    if (sqlite3_bind_text(stmt, 2, hashed_password, -1, SQLITE_STATIC) != SQLITE_OK){
        printf("\nError: Failed to bind hashed_password\n");
    }

    if (sqlite3_bind_text(stmt, 3, salt, -1, SQLITE_STATIC) != SQLITE_OK){
        printf("\nError: Failed to bind salt\n");
    }

    if (sqlite3_step(stmt) != SQLITE_DONE){
        printf("\nError: Failed to execute statement\n");
    }

    sqlite3_finalize(stmt);
    printf("Successfully entered in db\n\n");

    
    
    
    // close database ------------------------------------------------------------------>
    if (sqlite3_close(db) != SQLITE_OK){
        printf("Error in closing: \n%s", sqlite3_errmsg(db));
    }


    return 0;
}
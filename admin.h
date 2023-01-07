#ifndef ADMIN
#define ADMIN
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "fileSystem.c++"

//@createAdmin()
//@description: Will ask for both username and password. 
//Then both info will be sent and stored within the adminRecord.csv
//@Helper_Functions: addNewAdmin() -> fileSystem.c++

void createAdmin();

//@adminLogin()
//@description: Will ask for both username and password. Then check with the database to see if
//The admin exists, the password is correct, the admin does not exist, the password is incorrect
//The function will exit after 3 failed attempts.
//@Helper_Functions: checkAdminLogin() -> fileSystem.c++

void adminLogin();

//@showCredentials()
//@description: Displays the admin's username and password 
//after re-verification using checkAdminLogin() function from fileSystem.c++
//@Helper_Functions: checkAdminLogin() -> fileSystem.c++

void showCredentials();

//@createCustomer()
//@description: Will ask for customer name, address, city, email address, phone number, 
//bank account id, and bank account balance. All these info will then be passed into 
//addNewCustomer() from fileSystem.c++
//@Helper_Functions: addNewCustomer() -> fileSystem.c++

void createCustomer();
#endif

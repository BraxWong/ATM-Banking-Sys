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

//@viewCustomer()
//@description: Will ask for customer's name, then it will be passed in as an argument for displayCustomerInfo().
//displayCustomerInfo() from fileSystem.c++ will then check if the name exists within he csv, then prints out
//the entire row.
//@Helper_Functions: displayCustomerInfo() -> fileSystem.c++

void viewCustomer();


//@addCustomerInfo()
//@description: Will ask for customer's name, then it will be passed in as an argument for displayCustomerInfo().
//The system will then ask what the user would like to replace. Then it will ask what the user would like to replace
//it with. Both of the user input will then be passed into editFile() to replace the info.
//@Helper_Functions: editFile() -> fileSystem.c++

void addCustomerInfo();

//@adminlogout()
//@description: Will exit the program using exit(0) and passing 0 as an argument.

void adminLogout();

#endif

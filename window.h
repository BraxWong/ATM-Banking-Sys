#ifndef WINDOW
#define WINDOW
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "admin.c++"
#include "fileSystem.c++"

//@showWindow()
//@description: Will be ran as soon as the porgram starts. It has 2 options
//@Options: 1. Create admin account -> createAdmin() -> admin.c++
//@Options: 2. Login as an admin -> adminLogin() -> admin.c++

void showWindow();

//@showPrompt()
//@description: Will ask for user inputs in order to proceed. It has 6 options
//@Options: 1. Create customer account -> createCustomer() -> admin.c++
//@Options: 2. Show admin's credentials -> showCredentials() -> admin.c++
//@Options: 3. Show customer's information
//@Options: 4. Edit customer's information
//@Options: 5. Check customer's account balance
//@Options: 6. Exit the program

void showPrompt();



#endif

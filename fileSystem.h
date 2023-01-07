#ifndef FILESYS
#define FILESYS
#include <limits>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <sstream>

//@clearUserInput()
//@description: Will clear out all previous user input

void clearUserInput();

//@checkAdminLogin()
//@param: std::string username, std::string password
//@description: Takes username and password as arguments. Then opens the adminRecord.csv
//and get the line from the csv file. It will then parse the line to check the username
//password. If th count is 2, the both username and password match and exist within the csv file.

bool checkAdminLogin(char* username, char* password);

//@addNewEntry()
//@param: std::string fileName, std::string username, std::string password
//@description: Takes fileName, username, and password as arguments. It appends
//to adminRecord.csv file without overriding existing data.

void addNewEntry(char* fileName, char* username, char* password);

//@addNewCustomer()
//@param: std::string name,  std::string addr, std::string city, std::string email, std::string num,
//std::string id, std::string balance
//@description: Takes name, addr, city, email, num, id, and balance as arguments. It appends
//to customerRecord.csv file without overriding existing data.

void addNewCustomer(char* name, char* addr, char* city, char* email, char* num, char* id, char* balance);

//@displayCustomerInfo()
//@param: std::string name
//@description: Takes a string as an argument, then goes through customerRecord.csv
//to find out if the name (customer's name) exist within the csv file. If so, 
//it will print out the entire row.

bool displayCustomerInfo(char* name);


//@editFile()
//@param: std::string fileName, std::string ori, std::string replace
//@description: Will take three strings as arguments, it will find the ori within
//the file using std::string.find() function to get the pointer to the word. 
//The std::string.replace() will be used to replace or with replace.

void editFile(char* fileName, char* ori, char* replace);
#endif

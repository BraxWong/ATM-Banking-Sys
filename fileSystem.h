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
#endif

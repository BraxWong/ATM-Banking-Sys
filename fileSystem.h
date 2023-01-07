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

void clearUserInput();

bool checkAdminLogin(char* username, char* password);

void addNewEntry(char* fileName, char* username, char* password);
#endif

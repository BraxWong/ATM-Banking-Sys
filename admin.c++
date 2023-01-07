#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "fileSystem.c++"


void adminLogin() {
   
    std::string username, password;
    int i = 0;

    while(i != 3){
        std::cout << "Please enter your username.\n";
        std::cin >> username;
        std::cout << "Please enter your password.\n";
        std::cin >> password;
        
        if(!checkAdminLogin(username,password)){
            std::cout << "Wrong username or password. Please try again.\n";
            ++i;
        }

        else {
          std::cout << "Login Complete.\nWelcome " << username << "\n";
          break;
        }

    }

}


void createAdmin() {

  std::string username, password, fileName = "adminRecord.csv";

  while(true){

      std::cout << "Please enter a new username (Must be 8 characters or longer)\n";
      std::cin >> username;
      std::cout << "Please enter a new password (Must be 8 characters or longer)\n";
      std::cin >> password;

      if(username.length() < 8 || password.length() < 8) {
          
          std::cout << "Username and password must be 8 characters or longer. Please try again.\n";

      }

      else {
          
          addNewEntry(fileName, username, password);
          break;

      }

  }

}

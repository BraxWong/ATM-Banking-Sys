#include "admin.h"


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


void showCredentials() {
    
    std::string username, password;
    int i = 0;

    while(i != 3){
        
        std::cout << "Please enter your admin username.\n";
        std::cin >> username;
        std::cout << "Please enter your admin password.\n";
        std::cin >> password;

        if(checkAdminLogin(username,password)){
            
            std::cout << "Your admin username is: " << username << "\nYour admin password is: " << password << "\n";
            break;

        }

        else {
            
            ++i;
            std::cout << "Incorrect admin username or password. " << 3 - i << " attempts left.\n";

        }

    }

}


void createCustomer() {

    std::string name, addr, city, email, num, id, balance;

    std::cout << "Please enter the name of the customer.\n";
    std::getline(std::cin,name);
    std::cout << "Please enter the address of the customer.\n";
    std::getline(std::cin,addr);
    std::cout << "Please enter the city of which the customer live in.\n";
    std::cin >> city;
    std::cout << "Please enter the email address of the customer.\n";
    std::cin >> email;
    std::cout << "Please enter the customer's phone number.\n";
    std::cin >> num;
    std::cout << "Please enter the customer's bank account id.\n";
    std::cin >> id;
    std::cout << "Please enter the customer's bank account balance.\n";
    std::cin >> balance;

    addNewCustomer(name,addr,city,email,num,id,balance);

}


void viewCustomer() {

    std::string name;
    std::cout << "Please enter the name of the customer you would like to view.\n";
    std::cin >> name;
    displayCustomerInfo(name);

}

void addCustomerInfo() {

    std::string name, replace;

    while(true){
    
        std::cout << "Please enter the name of the customer you would like to view.\n";
        std::getline(std::cin,name);

        if(displayCustomerInfo(name)){

            break;

        }

    }

    FILESYS::clearUserInput();
    std::cout << "Please enter what you would like to replace.\n";
    std::getline(std::cin,name);
    std::cout << "Please enter what you would like to replace with.\n";
    std::getline(std::cin,replace);

    FILESYS::editFile("customerRecord.csv",name,replace);
}

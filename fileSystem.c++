#pragma once
#include "fileSystem.h"

void clearUserInput() {

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

}

bool checkAdminLogin(std::string username, std::string password){

    std::fstream adminRecord;
    int count = 0;
    adminRecord.open("adminRecord.csv",std::ios::in);
    std::string line, word;

    while(adminRecord.good()){

        std::getline(adminRecord, line);
        std::stringstream s(line);

        while(std::getline(s,word,',')) {

            if(username == word || password == word){

                ++count;

            }

        }

        if(count == 2){

            return true;

        }

        count = 0;

    }

    return false;

}


void addNewEntry(std::string fileName, std::string username, std::string password){
    
    std::ofstream adminRecord;
    adminRecord.open(fileName,std::ios_base::app);

    adminRecord << username << "," << password << "\n";


}

void addNewCustomer(std::string name, std::string addr, std::string city, std::string email, std::string num, std::string id, std::string balance){

    std::ofstream customerRecord;
    customerRecord.open("customerRecord.csv", std::ios_base::app);
    customerRecord << name << "," << addr << "," << city << "," << email << "," << num << "," << id << "," << balance <<"\n";

}

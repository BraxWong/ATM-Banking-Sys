#include "window.h"

void showPrompt() {

    int decision;

    while(true){

        std::cout << "Press 1 to create a customer account\nPress 2 to show admin's credentials\nPress 3 to show customer's information\nPress 4 to edit customer's information\nPress 5 to check customer's balance\nPress 6 to quit\n";
        std::cin >> decision;

        if(decision == 1){
            
            FILESYS::clearUserInput();
            ADMIN::createCustomer();

        }

        else if(decision == 2){

            
            ADMIN::showCredentials();

        }

        else if(decision == 3){

            ADMIN::viewCustomer();

        }

        else if(decision == 4){

            ADMIN::addCustomerInfo();

        }

        else if(decision == 6){

            break;

        }

        else {

          std::cout << "Error.\n";


        }

    }
    
}

void showWindow() {
    
    int decision;

	  std::cout << "Welcome to ATM-Banking-System\n";

	  while(true) {

		    std::cout << "To create an Admin account, press 1.\nTo log into your admin account, press 2.\n";

		    std::cin >> decision;

		    if(decision == 1) {
			
          FILESYS::clearUserInput();

          ADMIN::createAdmin();

			    break;

		    }

		    else if(decision == 2) {

          FILESYS::clearUserInput();

          ADMIN::adminLogin();

          showPrompt();

			  break;

		    }

		    else {

			    std::cout << "Please enter either 1 or 2.\n";

		    }

	  }

}




int main() {

  showWindow();
  return 0;

}

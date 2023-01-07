#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "fileSystem.c++"
#include "admin.c++"
void showPrompt() {

    return;
}
void showWindow() {
    
    int decision;

	  std::cout << "Welcome to ATM-Banking-System\n";

	  while(true) {

		    std::cout << "To create an Admin account, press 1.\nTo log into your admin account, press 2.\n";

		    std::cin >> decision;

		    if(decision == 1) {
			
          clearUserInput();

          createAdmin();

			    break;

		    }

		    else if(decision == 2) {

          clearUserInput();

          adminLogin();

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

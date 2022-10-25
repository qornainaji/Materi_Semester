/**
 * Project Untitled
 */


#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "PhoneBook.h"
#include "Controller.h"

using namespace std;

/**
 * Controller implementation
 */


void Controller::commandLoop() {
    char x;
    PhoneBook phone;
    do{
        cout << "*** My Lovely PhoneBook <3 ***" << endl;
        cout << "    Choose the menu: " << endl;
        cout << "    1. Add Contact" << endl;
        cout << "    2. Search Contact" << endl;
        cout << "    3. Delete Contact" << endl;
        cout << "    4. Show All Contact" << endl;
        cout << "    5. Edit Contact" << endl;
        cout << "    6. Exit (Press any number)" << endl << endl;
    
        cout<<"\nEnter a number: ";
        x = getch();
        cout<<"\nHold on, we will process your services!"<<endl;
        switch (x)
        {
        case '1':
            phone.addContact();
            break;
        
        case '2':
            phone.searchContact();
            break;
        
        case '3':
            phone.deleteContact();
            break;

        case '4':
            phone.showAllContact();
            break;

        case '5':
            phone.editContact();
            break;
        }
        
    }while((x == '1') || (x == '2') || (x == '3') || (x == '4') || (x == '5'));
        system("PAUSE");
        getch();
}
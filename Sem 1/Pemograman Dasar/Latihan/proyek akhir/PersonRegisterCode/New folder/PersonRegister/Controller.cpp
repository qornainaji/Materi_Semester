/**
 * Project Person Register Application
 */

#include "Controller.h"
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "Register.h"
#include "Person.h"

/**
 * Controller implementation
 */

using namespace std;
Register reg;

void Controller::commandLoop()
{

    char pilih;
    do
    {
        cout << "    Pilih menu:" << endl;
        cout << "    1. Register a person" << endl;
        cout << "    2. View current person" << endl;
        cout << "    3. View Previous Person" << endl;
        cout << "    4. View Next Person" << endl;
        cout << "\nTekan tombol lainnya untuk keluar" << endl
             << endl;
        pilih = getch();
        switch (pilih)
        {
        case '1':
            registerPerson();
            break;
        case '2':
            viewCurrentPerson();
            break;
        case '3':
            viewPreviousPerson();
            break;
        case '4':
            viewNextPerson();
            break;
        }
    } while ((pilih == '1') || (pilih == '2') || (pilih == '3') || (pilih == '4'));
    system("PAUSE");
    getch();
    //return EXIT_SUCCESS;
}

void Controller::registerPerson()
{
    string first, last, city;
    cout << "\nInsert person data: " << endl;
    cout << "Insert firstname :"; cin >> first;
    cout << "Insert lastname :"; cin >> last;
    cout << "Insert city :"; cin >> city;

    Person newperson(first, last, city);
    reg.insertRegistration(newperson);
}

void Controller::viewCurrentPerson()
{
    Person person = reg.getCurrentPerson();
    person.print();

   /*    if (person == NULL) {
         cout << "Register is empty!\n";
      } else {
         person.print();

      }
 */
}

void Controller::viewPreviousPerson()
{
    reg.previousPerson();
    Person p = reg.getCurrentPerson();
    p.print();
    
}

void Controller::viewNextPerson()
{
    reg.nextPerson();
    Person p = reg.getCurrentPerson();
    p.print();
    
}
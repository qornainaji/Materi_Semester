/**
 * Project Person Register Application
 */


#include "Register.h"
#include <iostream>
#include <string>
#include "Person.h"

/**
 * Register implementation
 */

using namespace std;

int count = 0;
int maxReg = 100;
int current = -1;
Person personlist[20];

void Register::insertRegistration(Person p) {
    //p.print();
    if (count == maxReg)
        return;
    personlist[count] = p;
    current = count;
    count++;
}

Person Register::getCurrentPerson() {
    if (current == -1)
    {
        cout << "REGISTER EMPTY\n";
    }
    else if (current >= 0)
    {
        return personlist[current];
    }
}

void Register::nextPerson()
{
    if (current == -1)
        return;
    if (current == (count - 1))
        return;
    if (current == 20)
    {
        cout << "List indeks reach = 20\n";
        return;
    }
    current++;
}

void Register::previousPerson() {
    if (current == -1)
    {
        cout << "List indeks reach = -1\n";
        return;
    }
    if (current == 0)
        return;

    current--;
}


 









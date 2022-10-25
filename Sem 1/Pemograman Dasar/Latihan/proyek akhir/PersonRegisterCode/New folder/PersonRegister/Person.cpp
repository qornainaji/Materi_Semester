//personTypeImp.cpp
 
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void Person::print() const
{
    cout << "Name : " << firstName << " " << lastName << "\nCity : " << city << "\n";
}

void Person::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string Person::getFirstName() const
{
    return firstName;
}

string Person::getLastName() const
{
    return lastName;
}

    //constructor
Person::Person(string first, string last, string _city) 

{ 
    firstName = first;
    lastName = last;
    city = _city;
}


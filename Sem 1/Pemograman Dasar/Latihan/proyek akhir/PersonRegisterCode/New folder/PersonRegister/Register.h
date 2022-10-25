/**
 * Project Person Register Application
 */


#ifndef _REGISTER_H
#define _REGISTER_H
#include "Person.h"

class Register
{
public:
    void insertRegistration(Person p);

    Person getCurrentPerson();

    void nextPerson();

    void previousPerson();
};

#endif //_REGISTER_H
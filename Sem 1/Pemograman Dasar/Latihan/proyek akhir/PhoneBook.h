/**
 * Phone Book
 */

#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H
//#include <string>

class PhoneBook {
public: 

    void commandLoop();

    void addContact();
    
    void searchContact();
    
    void deleteContact();
    
    void showAllContact();
    
    void editContact();
};

#endif //_PHONEBOOK_H
/**
 * Phone Book
 */

#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H
//#include <string>

class PhoneBook {
public: 

    void commandLoop();

    void addContact(int condition);
    
    void searchContact(int condition);
    
    void deleteContact(int condition);
    
    void showAllContact(int condition);
    
    void editContact(int condition);
};

#endif //_PHONEBOOK_H
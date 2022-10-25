/**
 * Project Untitled
 */


#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "PhoneBook.h"

using namespace std;

/**
 * PhoneBook implementation
 */


void PhoneBook::addContact() {
    ifstream myPhone;
    ofstream writePhone;
    string name, lastname, nophone;

    
    
        writePhone.open("phonebook.txt", ios::app);
        if(writePhone.is_open())
        {
                
            cout<<"Enter the contact name: ";
            getline(cin, name);
            cout<<"Enter a phone number: ";
            cin>>nophone;
            cin.ignore();
            writePhone<<"Name : "<<name<<" "<<"/   No. Phone : "<<nophone<<"\n"<<endl;
            writePhone.close();
            cout<<"Your contact is successfully been added!";
        }
}

void PhoneBook::searchContact() {
    ifstream myPhone;
    ofstream writePhone;
    string name, temp, nophone;
       
        
    int offset;

 
        myPhone.open("phonebook.txt");
        if(myPhone.is_open())
        {

            cout<<"1. Search by Name. "<<endl<<"2. Search by Phone Number."<<endl;
            char choose;
            choose=getch();
            // Search by Name
            if(choose == '1')
            {
                cout<<"Enter the contact Name that you remember: ";
                cin>>name;
                cin.ignore();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(name, 0)) != string::npos)
                    {
                        
                        cout<<temp<<endl<<endl;
                            
                    }

                     
                }
            }

            //Search by Phone Number
            if(choose == '2')
            {

                cout<<"Enter the Phone Number: ";
                cin>>nophone;
                cin.ignore();
                while(!myPhone.eof())
                    {   
                    getline(myPhone, temp);
                    if((offset = temp.find(nophone, 0)) != string::npos)
                    {
                        
                        cout<<temp<<endl<<endl;
                            
                    }
                }

            }
                

                
                
        }
        myPhone.close();
    

}

void PhoneBook::deleteContact() {
    ifstream myPhone;
    ofstream writePhone;
    string search, temp;
                        
    int offset; 
        


        myPhone.open("phonebook.txt");
        if(myPhone.is_open())
        {
            cout<<"1. Find contact by Name. "<<endl<<"2. Find contact by Phone Number."<<endl;
            char choose;
            choose=getch();
            // Find contact by Name
            if(choose == '1')
            {
                cout<<"Enter the contact Name that you remember: ";
                cin>>search;
                cin.ignore();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {
                        cout<<temp<<endl;                                                  
                    }
                }
                   
            }
            if(choose == '2')
            {
                cout<<"Enter the contact Phone Number that you remember: ";
                cin>>search;
                cin.ignore();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {                        
                            cout<<temp<<endl;                                                                            
                    }
                }
                   
            }
        }
            
        myPhone.close();
        cout<<"Are you sure you want to delete all of this contact?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl<<"Insert the number: "<<endl;
        char choose1;
        choose1=getch();
        if(choose1 == '1')
        {
            myPhone.open("phonebook.txt");
            if(myPhone.is_open())
            {
                
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) == temp.npos)
                    {
                        
                        writePhone.open("phonebook1.txt", ios::app); 
                        if(writePhone.is_open())
                        {   
                             writePhone<<temp<<endl;                                                  
                            writePhone.close();
                        }
                    }   
                }
    
            cout<<"\nYour contact is successfully been deleted!"<<endl<<endl;
            myPhone.close();
            remove("phonebook.txt");
            rename("phonebook1.txt", "phonebook.txt");
            }
                
        }
        if(choose1 == '2')
        cout<<"\nYour command is canceled!"<<endl<<endl;
      

}

void PhoneBook::showAllContact() {
    ifstream myPhone;
    ofstream writePhone;
    string name, temp, nophone;


        myPhone.open("phonebook.txt");
        if(myPhone.is_open())
        {
            cout<<"\nThese are all of your contact:"<<endl<<endl;
            while(!myPhone.eof())
            {
                getline(myPhone, temp);
                cout<<temp<<endl;
            }
        myPhone.close();
        }
}

void PhoneBook::editContact() {
    ifstream myPhone;
    ofstream writePhone;
    string search, name, nophone, temp;
                        
    int offset; 
        


        myPhone.open("phonebook.txt");
        if(myPhone.is_open())
        {
            cout<<"1. Find contact by Name. "<<endl<<"2. Find contact by Phone Number."<<endl;
            char choose;
            choose=getch();

            // Find contact by Name
            if(choose == '1')
            {
                cout<<"Enter the contact Name that you remember: ";
                cin>>search;
                cin.ignore();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {
                        cout<<temp<<endl;                                                  
                    }   
                }
                   
            }
            // Find contact by Phone Number
            if(choose == '2')
            {
                cout<<"Enter the contact Phone Number that you remember: ";
                cin>>search;
                cin.ignore();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {
                        cout<<temp<<endl;                                                  
                    }
                }
                   
            }
        }
            
        myPhone.close();
        cout<<"Are you sure you want to edit this contact?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl<<"Insert the number: "<<endl;
        char choose1;
        choose1=getch();
        if(choose1 == '1')
        {
            cout<<"Enter the New Name: ";
            getline(cin, name);
            cout<<"Enter the New Phone Number: ";
            getline(cin, nophone);
            myPhone.open("phonebook.txt");
            if(myPhone.is_open())
            {
                
                writePhone.open("phonebook1.txt", ios::app);
                writePhone<<"Name : "<<name<<" "<<"/   No. Phone : "<<nophone<<"\n"<<endl;
                writePhone.close();
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) == temp.npos)
                    {
                        
                        writePhone.open("phonebook1.txt", ios::app); 
                        if(writePhone.is_open())
                        {   
                            writePhone<<temp<<endl;                                                 
                            writePhone.close();
                        }
                    }     
                }
    
            cout<<"\nYour contact is successfully been edited"<<endl;
            myPhone.close();
            remove("phonebook.txt");
            rename("phonebook1.txt", "phonebook.txt");
            }
                
        }
        if(choose1 == '2')
        cout<<"\nYour command is canceled!"<<endl<<endl;
    

}
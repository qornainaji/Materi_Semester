/**
 * Phone Book
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


void PhoneBook::commandLoop() {
    char x;
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
            addContact();
            break;
        
        case '2':
            searchContact();
            break;
        
        case '3':
            deleteContact();
            break;

        case '4':
            showAllContact();
            break;

        case '5':
            editContact();
            break;
        }
        
    }while((x == '1') || (x == '2') || (x == '3') || (x == '4') || (x == '5'));
        system("PAUSE");
        getch();
    
}

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
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {
                        cout<<temp<<endl;                                                  
                    }else
                    {
                        cout<<"\nNo contact matches!"<<endl<<endl;
                        myPhone.close();
                        break;
                    }   
                }
                   
            }
            if(choose == '2')
            {
                cout<<"Enter the contact Phone Number that you remember: ";
                cin>>search;
                while(!myPhone.eof())
                {   
                    getline(myPhone, temp);
                    if((offset = temp.find(search, 0)) != temp.npos)
                    {                        
                            cout<<temp<<endl;                                                                            
                    }else
                    {
                        cout<<"\nNo contact matches!"<<endl<<endl;
                        myPhone.close();
                        break;
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
        //cin.ignore();
        if(choose1 == 1)
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
#include <iostream>
#include <stack>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    stack<char> malang;
    // stringstream temp;
    string kata;
    cout<<"masukkan kata :\n";
    // cin>>kata;
    getline(cin,kata);

    for(int i=0; i<kata.length(); i++)
    {
        if(kata[i]=='n' && kata[i+1]=='g')
        {
            kata[i]='g';
            kata[i+1]='n';
        }
    }

    // for(int i=0;)
        
    for(int i=0; i<kata.length(); i++)
    {   
        if(kata[i]!=' ')
        {
            malang.push(kata[i]);
        }
        else if(kata[i]==' ')
        {
            // malang.push(' ');
            while(!malang.empty())
            {
                cout<<malang.top();
                malang.pop();
            }
            cout<<' ';
            // malang.push(kata[i]);
        }

    }



    for(int i=0; i<kata.length(); i++)
    {
        cout<<malang.top();
        malang.pop();
    }

    // for(int i=kata.length()-1; i>=0; i--)
    // {
    //     if (kata[i]!='g' && kata[i-1]!='n')
    //     {
    //         temp=temp+kata[i+1];
    //     }
    // }





    return 0;
}
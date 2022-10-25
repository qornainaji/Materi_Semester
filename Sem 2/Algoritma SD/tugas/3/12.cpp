//Qornain Aji
//21/481767/TK/53170

#include <iostream>
#include <queue>
#include <string>
using namespace std;




int main()
{
    queue<char> palindrome1;
    queue<char> palindrome2;
    string kata;
    int kondisi = 1;
    cout<<"Masukkan huruf-huruf yang palindrome atau bukan palindrome : ";
    getline(cin,kata);

    for (int i=0; i<kata.length(); i++)
    {
        if (kata[i]!=' ')
        {
            palindrome1.push(kata[i]);
        }
    }

    for (int i=kata.length()-1; i>=0; i--)
    {
        if (kata[i]!=' ')
        {
            palindrome2.push(kata[i]);
        }
    }

    for (int i=0; i<kata.length(); i++)
    {
        if (palindrome1.front()!=palindrome2.front())
        {
            kondisi = 0;
        }
        palindrome1.pop();
        palindrome2.pop();
    }

    if (kondisi==1)
    {
        cout<<"sebuah PALINDROME";
    }else{
        cout<<"BUKAN PALINDROME";
    }

    return 0;
}
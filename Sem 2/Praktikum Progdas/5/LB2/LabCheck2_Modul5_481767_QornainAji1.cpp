#include <iostream>
#include <string.h>
#include <string>
using namespace std;

void removing(string);

int main()
{
    string numberphone;
    cout<< "insert number phone : ";
    cin>>numberphone;
    removing(numberphone);


    return 0;

}

void removing(string no)
{
    string result;
    result= no.erase(0,7);
    cout<<"This is the result : "<<'0'+result;
}
#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout<<"Mention your exam mark : ";
    cin>> nilai;

    if(nilai >=95)
    {
        cout<<"Outstanding!";
    }
    else if(nilai >=90)
    {
        cout<<"Excellent!";
    }
    else if(nilai >=85)
    {
        cout<<"Verry statisfying!";
    }
    else if(nilai >=80)
    {
        cout<<"Statisfying!";
    }
    else if(nilai >=75 )
    {
        cout<<"Good";
    }
    else
    {
        cout<<"Need for improvement";
    }

    return 0;
}
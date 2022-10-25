#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata;
    int i, kondisi;
    kondisi = 1;
    cout << "Input kata : ";
    cin >> kata;

    for(i=0; i<kata.length()/2; i++)
    {
        if(kata[i]!=kata[kata.length()-i-1])
        {
            kondisi=0;

        }
    }

    if(kondisi==1)
    {
        cout << "Yes";
    }else
    {
        cout << "No";
    }

    return 0;
}
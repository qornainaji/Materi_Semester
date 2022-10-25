#include <iostream>

using namespace std;

int main()
{
    int num[8]={29, 43, 89, 84, 74, 48, 38, 20};

    for(int i=0; i<8; i++)
    {
        if(num[i]==38)
        {   
            cout<<num[i];
        }
    }


    return 0;

}
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout<<"insert the first number : ";
    cin>>a;
    cout<<"\ninsert the second number : ";
    cin>>b;

    if(a>b)
    {
        for(c=a%b; c>0; c=a%b)
        {
            c=a%b;
            a=b;
            b=c;

        }

        
    
    }
    cout<<b;

    return 0;

}

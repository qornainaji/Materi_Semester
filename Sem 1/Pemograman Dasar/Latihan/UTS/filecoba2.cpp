#include <iostream>

using namespace std;

int isprime(int);
int main()
{
    int n, i;
    cout<<"Please enter range of prime no.s : "<<endl;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(isprime(1))
            cout<<i<<endl;
    }  
    
    return 0;

}

int isprime(int i)
{ 
    int a,b=1;
    for(a=i-1;a>1;a--)
    {
        b=i%a;
        if(b==0)
            return 0; 
    }
    if(b==1)
        return 1;
    
}
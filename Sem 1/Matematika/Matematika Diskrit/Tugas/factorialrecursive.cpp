#include <iostream>



using namespace std;

int main()
{

    double n, i, temp, temp2;
    cout<<"insert what number do you want to factor : ";
    cin>>n;
    temp=n;
    for(i=n; i>1; i--)
    {
        //cout<<temp<<endl;
        temp=temp*(n-1);
        n=n-1;
        //cout<<temp<<endl;
    
    }
    //n=temp;
    cout<<temp;

    return 0;
}
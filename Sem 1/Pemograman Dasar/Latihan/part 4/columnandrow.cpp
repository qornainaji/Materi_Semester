#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double numeven, sum;
    int i, limit;

    
    cout<<"This is a program to make a table of even number, then sum the result with the even number. "<<endl; 
    cout<<"Please input the how many rows do you want!"<<endl<<endl;
    cin>>limit;
    cout<<"These are the for TABLE LIST of your even number! Enjoy :D "<<endl<<endl;
    cout<<"VALUE"<<"\t\t"<<"SUM"<<endl;
    cout<<"----------\t"<<"---------"<<endl;
    

    for(i=1; i<=limit; i++)
    {
        numeven=2*i;
        sum=sum+numeven;
        cout<<numeven<<"\t\t"<<sum<<endl;
        
        
        
        
    }
    
    cout<<"\nTHANK YOU FOR USING OUR CODE."; 

     return 0;
}
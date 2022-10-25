#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    int limit;

    
    cout<<"This is a Celsius to Fahrenheit temperature converter."<<endl; 
    cout<<"Please input the limit of  the temperature that you want"<<endl<<"to convert into Fahrenheit : "<<endl;
    cin>>limit;
    cout<<"These are the for the conversion from celsius to fahrenheit. "<<endl<<endl;

    for(celsius=0; celsius<=limit; celsius=celsius+15)
    {
        fahrenheit=1.8*celsius+32;
        cout<<celsius<<"\t"<<fahrenheit<<endl;
        
        
    }

    cout<<"\nThank you for using our code."; 

     return 0;
}
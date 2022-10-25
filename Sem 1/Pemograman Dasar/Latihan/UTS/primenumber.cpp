#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int n;
    cout<<"Enter a +ve integer : ";
    cin>>n;

    if(n<2)
    {
        cout<<"invalid Entry....";
        //getch();
        return -1;
        
    }

    for(int x=2; x<n; x++)
    {

        int flag=0;
        for(int i=2; i<=x/2; i++)
        {
            if(x%i==0){
                flag=i; break;
            }
        }

        if(flag==0)
        {
            cout<<x<<" ";
        }
    
    }   

    //getch();
    return 0;


}

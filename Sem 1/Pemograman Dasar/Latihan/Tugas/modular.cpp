#include <iostream>

using namespace std;

void printMessage(int counter);

int main()
{
    /*int num;
    cout<<"Enter an integer";
    cin>>num;
    printMessage(num);*/
    char x='k';
    char *y= &x;
    char *z=y;
    cout<<*z;
    /*cout<<"type 1 for (Hello World) and 0 for (Bye bye)"<<endl;
    cin>>x;

    //cout<<y<<endl;
    //cout<<y<<endl;
    //cout<<&x;*/

    return 0;
}

/*void printMessage(int counter)
{
   /*int i;
   for(i=0; i<counter; i++)
   {
       cout<<"Hello world!"<<endl;
   }*/

   /*if(counter==1)
   cout<<"Hello world!";
   else if(counter==0)
   cout<<"Bye bye :'D ";
   else
   cout<<"Please input 1 or 0 number";

}*/

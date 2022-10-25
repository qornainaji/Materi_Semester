#include<iostream>
using namespace std;
int main ()
{
 int myarray[5];
 cout<<"Input 5 element numbers : \n";
 for (int i=0;i<5;i++)
 {
     cout<<i+1<<": ";
     cin>>myarray[i];
     cout<<"\n";
 }
 cout<<"\nInput list is \n";
 for(int i=0;i<5;i++)
 {
 cout <<myarray[i]<<"\t";
 }
 for(int k=1; k<5; k++)
 {
 int temp = myarray[k];
 int j= k-1;
 while(j>=0 && temp <= myarray[j])
 {
 myarray[j+1] = myarray[j];
 j = j-1;
 }
 myarray[j+1] = temp;
 }
cout<<"\nOutput list is \n";
for(int i=0;i<5;i++)
 {
 cout <<myarray[i]<<"\t";
 }
 return 0; //Lupa return 0;
}

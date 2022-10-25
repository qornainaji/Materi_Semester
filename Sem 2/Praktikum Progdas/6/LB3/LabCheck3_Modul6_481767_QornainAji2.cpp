#include<iostream>
using namespace std;

void insertArray(int myarr[]);
void outputArray(int myarr[]);

int main ()
{
    int myarray[5];
    insertArray(myarray);
    outputArray(myarray);
    return 0;
}

void insertArray(int myarr[]) // input elemen array
{
    cout<<"Input 5 element numbers : \n";
    for (int i=0;i<5;i++)
    {
        cout<<i+1<<": ";
        cin>>myarr[i];
        cout<<"\n";
    }
}

void outputArray(int myarr[]) // output elemen array
{
    cout<<"\nInput list is \n";
    for(int i=0;i<5;i++)
    {
        cout <<myarr[i]<<"\t";
    }
    for(int k=1; k<5; k++)
    {
        int temp = myarr[k];
        int j= k-1;
        while(j>=0 && temp <= myarr[j])
        {
            myarr[j+1] = myarr[j];
            j = j-1;
        }
        myarr[j+1] = temp;
    }
    cout<<"\nOutput list is \n";
    for(int i=0;i<5;i++)
    {
        cout <<myarr[i]<<"\t";
    }
}

    
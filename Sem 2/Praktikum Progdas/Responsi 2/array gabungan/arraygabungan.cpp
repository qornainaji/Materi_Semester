#include<iostream>
using namespace std;
void indexArray(int a, int b[], int c);
void insertArray(int a, int b[]);
void searchArray(int a, int b[], int c, int d, int answer);
int main()
{
int n,k,l,ans=-1;
cout<<"Enter size of array"<<endl;
cin>>n;
int arr[n];
insertArray(n, arr);
indexArray(n, arr, l);
searchArray(n, arr, k, l, ans);
return 0;
}
void insertArray(int a, int b[])
{
cout<<"Enter elements of array"<<endl;
for(int i=0;i<a;i++)
{
cin>>b[i];
}
}
void indexArray(int a, int b[], int c)
{
cout<<"Accessing element at index. Enter the index : ";
cin>>c;
if(c>=a)
{
cout<<"Invalid Index!";
exit(0);
}
cout<<endl;
cout<<"\nElement present at index "<<c<<" is "<<b[c]<<endl;
}
void searchArray(int a, int b[], int c, int d, int answer)
{
cout<<"Enter element to be searched : "<<endl;
cin>>d;
for(int i=0;i<a;i++)
{
if(b[i]==d)
{
answer=i;
break;
}
}
if(answer!=-1)
cout<<"The element "<<d<<" is present at index "<<answer;
else
cout<<"The element "<<d<<" is not there in the array";
}
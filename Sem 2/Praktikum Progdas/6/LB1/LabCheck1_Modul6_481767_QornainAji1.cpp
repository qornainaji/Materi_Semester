#include <iostream>
using namespace std;
int main()
{
 int arr[10];
 int i;
 float sum=0;
 float avg=0; // float agar bisa desimal
 cout<<"Masukkan 10 Elemen Array bertipe integer";
 for(i=0; i<10; i++)
 {
    cin>>arr[i];
    sum = sum + arr[i];
 }
 cout<<"\nElemen Array adalah : \n";
 for(i=0; i<10; i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<"\n\nHasil penjumlahan dari semua elemen array adalah : "<<sum;
 avg = sum/10;
 cout<<"\nRerata elemen array adalah : "<<avg;
 return 0;
}

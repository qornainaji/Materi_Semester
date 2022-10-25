#include <iostream>

using namespace std;

int main()
{
    float num, suhu_dalam_Fahrenheit;
    int i;
    
    cout<<"Masukkan batas untuk suhu yang dikonversi : ";
    cin>>num;
    
        for (i=0; i<=num ; i=i+15)
        {
            suhu_dalam_Fahrenheit=((i*1.8) + 32);
            cout<<i<<"\t"<<suhu_dalam_Fahrenheit<<endl;
        }
    return 0;
}
#include <iostream>

using namespace std;

int main ()
{
    float *pcel, *pfah, fah, cel;
    pcel=&cel;
    pfah=&fah;

    cout<<"Masukkan suhu dalam Fahrenheit : ";
    cin>>fah;
    cel=(*pfah-32)*5/9;
    cout<<"Suhu dalam celcius adalah : "<<cel<<endl;

    return 0;


}
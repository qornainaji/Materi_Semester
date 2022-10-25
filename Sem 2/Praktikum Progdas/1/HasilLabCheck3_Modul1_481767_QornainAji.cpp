#include <iostream>

using namespace std;

int main ()
{
    float pi, r, tinggi, volume_bangun;
    int  bangun;
    pi=3.14;

    cout<<"Pilih bangun apa yang ingin dihitung : "
    <<"\n 1. Tabung \n 2. Kerucut\n";
    cin>>bangun;
    cout<<"Masukkan jari-jari lingkaran : ";
    cin>>r;
    cout<<"Masukkan tinggi bangun : ";
    cin>>tinggi;  

    if(bangun==1)
    {

        volume_bangun = pi*r*r*tinggi;
        cout<<"Volume Tabung adalah : "<<volume_bangun;

    }else{
        volume_bangun = pi*r*r*tinggi/3;
        cout<<"Volume Tabung adalah : "<<volume_bangun;

    }
    
    return 0;
}
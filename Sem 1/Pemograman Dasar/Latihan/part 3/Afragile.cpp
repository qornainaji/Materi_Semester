#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double bangun_ruang, kerucut, tabung, diameter, tinggi, apotema, luas, volume;

    cout<<"Masukkan diameter"<<endl;
    cin>>diameter;
    cout<<"Masukkan tinggi"<<endl;
    cin>>tinggi;

    cout<<"Bangun Ruang apa yang kana dipilih?"<<endl<<"(Jika kerucut ketik 1 dan tabung ketik 0)";
    cin>>kerucut;

    if(kerucut==1)
        {
            luas=(3.14)*(diameter/2)*(diameter/2) + ((3.14)*(diameter/2));
            volume=(0.33)*(3.14)*(diameter/2)*(diameter/2)*(tinggi);

        }
    else
        {
            luas=(2*(3.14)*(diameter/2)*(diameter/2)) + ((3.14)*(diameter)*(tinggi));
            volume=(3.14)*(diameter/2)*(diameter/2)*(tinggi);
        }
    
    cout<<"\nluas kerucut : "; cout<<luas;
    cout<<"\nvolume kerucut : "; cout<<volume;



    return 0;
}
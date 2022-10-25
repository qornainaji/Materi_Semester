#include <iostream>

using namespace std;

int main()
{
    float populasi_sekarang, populasi_kemarin;
    populasi_kemarin = 50;
    cin>>populasi_sekarang;

    if (populasi_sekarang>populasi_kemarin)
    {
        populasi_sekarang = populasi_sekarang-populasi_kemarin;
        populasi_sekarang = populasi_sekarang/populasi_kemarin*100;
        cout<<"Growth Rate = "<<populasi_sekarang<<" %"<<endl;
    }else{
        cout<<"Terjadi penurunan populasi"<<endl;
    }
    return 0;
}
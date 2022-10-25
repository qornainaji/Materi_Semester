#include <iostream>

using namespace std;

int main()
{
    int jenis_bangun;
    float volume;

    cout<<"Pilih jenis bangun ruang yang ingin dihitung "<<"\n 1. Kubus"<<"\n 2. Balok"<<"\n 3. Prisma"<<"\n Masukkan angka yang dipilih : ";
    cin>>jenis_bangun;

    switch(jenis_bangun)
    {
        case 1:
            float sisi;
            cout<<"Masukkan panjang sisi kubus : ";
            cin>>sisi;
            volume=sisi*sisi*sisi;
            cout<<"Volume Kubus adalah : "<<volume;
            break;
        case 2:
            float sisi_panjang, sisi_pendek, tinggi;
            cout<<"Masukkan panjang sisi panjang balok : ";
            cin>>sisi_panjang;
            cout<<"Masukkan panjang sisi pendek balok : ";
            cin>>sisi_pendek;
            cout<<"Masukkan panjang tinggi balok : ";
            cin>>tinggi;
            volume=sisi_panjang*sisi_pendek*tinggi;
            cout<<"Volume Balok adalah : "<<volume;
            break;
        case 3:
            cout<<"Masukkan panjang sisi panjang prisma : ";
            cin>>sisi_panjang;
            cout<<"Masukkan panjang sisi pendek prisma : ";
            cin>>sisi_pendek;
            cout<<"Masukkan panjang tinggi prisma : ";
            cin>>tinggi;
            volume=sisi_panjang*sisi_pendek*tinggi/2;
            cout<<"Volume Prisma adalah : "<<volume;
            break;

        default:
            cout << "Angka jenis bangunan yang kamu masukkan salah";
            break;
    }


    return 0;
}

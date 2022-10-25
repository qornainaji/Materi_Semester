#include <iostream>
#include <string.h>
#include <string>
using namespace std;

void pemisahan(string);

int main()
{
    string nim;
    cout<<"Masukkan NIM Lengkap mu : ";
    cin>>nim;
    pemisahan(nim);
    return 0;

}

void pemisahan(string nomor)
{
    char angkatan[2], niu[6], kode_fakultas[2], nif[5];
    size_t length = nomor.copy(angkatan,2,0);
    angkatan[length]='\0';
    cout<<"Angkatan     :" <<angkatan<<endl;
    length = nomor.copy(niu,6,3);
    niu[length]='\0';
    cout<<"NIU          :"<<niu<<endl;
    length = nomor.copy(kode_fakultas,2,10);
    kode_fakultas[length]='\0';
    cout<<"Kode Fakultas:"<<kode_fakultas<<endl;
    length = nomor.copy(nif,5,13);
    nif[length]='\0';
    cout<<"NIF          :"<<nif<<endl;
}
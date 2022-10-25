#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[20], s2[20], s3[20];
    int i; //i merupakan integer
    cout<<"Masukkan string pertama untuk ditemukan panjang string tersebut :";
    cin>>s1;
    cout<<"\nString yang dimasukkan : "<<s1;
    cout<<"\nPanjang String tersebut adalah : "<<strlen(s1);

    cout<<"\n\nMasukkan string kedua untuk ditemukan panjang string tersebut :";
    cin>>s2;
    cout<<"\nString yang dimasukkan : "<<s2;
    cout<<"\nPanjang String tersebut adalah : "<<strlen(s2);

    strcpy(s3,s2);
    cout<<"\n\nSalin string kedua dalam string ketiga ";
    cout<<"\nString ketiga adalah : " <<s3;

    cout<<"\n\nSambungkan string pertama dan kedua:";
    strcat(s1,s2);
    cout<<"\nHasil penyambungan string pertama dan kedua adalah : "<<s1<<endl;

    cout<<endl<<"\nBandingkan string pertama dan kedua :";

    i=strcmp(s1,s2); //akan i<0 jika kata pertama memiliki ASCII value s1 lebih kecil dari s2 dst.
    if(i==0)
        cout<<"\nBoth strings are equal\n";
    else if(i<0) //
        cout<<s1<<" is less than "<<s2<<endl;
    else
        cout<<s1<<" is greater than "<<s2;

    cout<<endl<<"\nBandingkan string kedua dan ketiga :";

    i=strcmp(s2,s3);
    if(i==0)
        cout<<"\nBoth strings are equal\n";
    else if(i<0)
        cout<<s2<<" is less than "<<s3<<endl;
    else
        cout<<s2<<" is greater than "<<s3;

    return 0;
}
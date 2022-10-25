#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string nim, mk1, mk2, mk3, mk4, mk5;
int sks1, sks2, sks3, sks4, sks5;
float nilai1, nilai2, nilai3, nilai4, nilai5;
float totalnilai, totalsks;

void input()
{
    string temp;
    cout<<"Masukkan NIM : ";
    cin>>nim;
    getline(cin,temp);
    cout << " nama Mata Kuliah  1  : "; 
    getline(cin,mk1);
    cout << " SKS Mata Kuliah   1  : "; 
    cin >> sks1;
    cout << " Nilai Mata Kuliah 1  : "; 
    cin >> nilai1;
    cout << " nama Mata Kuliah  2  : "; 
    getline(cin,mk2);
    cout << " SKS Mata Kuliah   2  : "; 
    cin >> sks2;
    cout << " Nilai Mata Kuliah 2  : "; 
    cin >> nilai2;
    cout << " nama Mata Kuliah  3  : "; 
    getline(cin,mk3);
    cout << " SKS Mata Kuliah   3  : "; 
    cin >> sks3;
    cout << " Nilai Mata Kuliah 3  : "; 
    cin >> nilai3;
    cout << " nama Mata Kuliah  4  : "; 
    getline(cin,mk4);
    cout << " SKS Mata Kuliah   4  : "; 
    cin >> sks4;
    cout << " Nilai Mata Kuliah 4  : "; 
    cin >> nilai4;
    cout << " nama Mata Kuliah  5  : "; 
    getline(cin,mk5);
    cout << " SKS Mata Kuliah   5  : "; 
    cin >> sks5;
    cout << " Nilai Mata Kuliah 5  : "; 
    cin >> nilai5;

    totalsks = sks1 + sks2 + sks3 + sks4 + sks5;
    totalnilai = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;
}

float ipk()
{
    input();
    float ipk = totalnilai/totalsks;
    return ipk;
}

void cetak()
{
    float ipkcetak=ipk();
    cout<<"NIM  : "<<nim<<endl;
    cout<<"IPK  : "<<ipkcetak;
}

int main()
{
    cetak();
    return 0;
}

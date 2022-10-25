#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 69;
    int b = 4;
    int c = 2;
    int d = 0;
    int e = -4;

    float hasil1, hasil2, hasil3, hasil4;
    hasil1 = sqrt(a); // bukan sqrt(a)/d karena tidak bisa dibagi degnan 0.
    cout<< "Hasil dari sqrt(a) adalah " <<hasil1<<endl;
    hasil2 = sqrt(-e); // tidak bisa sqrt(e) karena bilangan imajiner, diganti dengan e = 4
    cout<< "Hasil dari sqrt(-e) adalah " <<hasil2<<endl;
    hasil3 = min(c,d); // perlu argumen lagi selain min(c), sehingga ditambahkan variabel d
    cout<< "Hasil dari min(c,d) adalah " <<hasil3<<endl;
    hasil4 = abs(e);
    cout<< "Hasil dari abs(e) adalah " <<hasil4<<endl;

    return 0;
}
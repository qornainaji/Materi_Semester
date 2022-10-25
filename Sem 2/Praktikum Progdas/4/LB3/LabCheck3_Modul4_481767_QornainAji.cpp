#include <iostream>
using namespace std;
union Film
{
    struct
    {
        char judul[100];
        char sutradara[100];
        char tahun[5];
        float dana;
        float rating;
        };
};

int main()
{
    Film film[3];
    for(int i = 0; i<3; i++)
    {
        cout << "FILM" << i+1 <<endl;
        cout << "Masukkan Judul film : ";
        cin.get(film[i].judul,100);
        cin.ignore();
        cout << "Masukkan Sutradara film : ";
        cin.get(film[i].sutradara,100);
        cin.ignore();
        cout << "Masukkan Tahun Terbit film : ";
        cin >> film[i].tahun;
        cin.ignore();
        cout << "Masukkan Dana Pembuatan (Miliar): ";
        cin >> film[i].dana;
        cin.ignore();
        cout << "Masukkan Rating film 1 - 10 : ";
        cin >> film[i].rating;
        cin.ignore();
    }

    for(int i = 0; i<3; i++)
    {
        cout << "FILM" << i+1 <<endl;
        cout << "   Judul       " << " : " << film[i].judul << endl;
        cout << "   Sutradara   " << " : " << film[i].sutradara << endl;
        cout << "   Tahun       " << " : " << film[i].tahun << endl;
        cout << "   Dana        " << " : " << film[i].dana << " Miliar" << endl;
        cout << "   Rating      " << " : " << film[i].rating << endl;
    }

    return 0;
}
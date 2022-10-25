#include <iostream>
using namespace std;
struct Buku
{
    char judul[50];
    char penulis[50];
    int tahun;
    int idBuku;
};

int main()
{
    // Buku buku1, buku2, buku3, buku4, buku5;
    Buku buku[5];
    for(int i = 0; i<5; i++)
    {
        cout << "BUKU" << i+1 <<endl;
        cout << "Masukkan Judul buku : ";
        cin.get(buku[i].judul,50);
        cin.ignore();
        cout << "Masukkan Penulis buku : ";
        cin.get(buku[i].penulis,50);
        cin.ignore();
        cout << "Masukkan Tahun Terbit Buku : ";
        cin >> buku[i].tahun;
        cin.ignore();
        cout << "Masukkan ID Buku : ";
        cin >> buku[i].idBuku;
        cin.ignore();
    }

    for(int i = 0; i<5; i++)
    {
        cout << "BUKU" << i+1 <<endl;
        cout << "   Judul   " << " : " << buku[i].judul << endl;
        cout << "   Penulis " << " : " << buku[i].penulis << endl;
        cout << "   Tahun   " << " : " << buku[i].tahun << endl;
        cout << "   ID Buku " << " : " << buku[i].idBuku << endl;
    }

    return 0;

}
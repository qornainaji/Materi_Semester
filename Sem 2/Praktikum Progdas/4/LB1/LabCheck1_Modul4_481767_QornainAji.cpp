#include <iostream>
using namespace std;
struct Mahasiswa
{
    char nama[40];
    int angkatan;
};

int main()
{
    Mahasiswa mhs;  // Kurang M kapital;
    cout << "Masukkan Nama Mahasiswa : ";
    cin.get(mhs.nama,40);
    cout << "Masukkan Angkatan : ";
    cin >> mhs.angkatan; // kurang mhs. ;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Angkatan : " << mhs.angkatan << endl;

    cout << "Alokasi memori untuk elemen nama : " << &mhs.nama << endl;
    cout << "Alokasi memori untuk elemen angkatan : " << &mhs.angkatan << endl; // harusnya &mhs.angkatan bukan .nama;

    cout << "Ukuran dari variabel struct  : " << sizeof(Mahasiswa) << endl; // kurang M kapital

    return 0;
}

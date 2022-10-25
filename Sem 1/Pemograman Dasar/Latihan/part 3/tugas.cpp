#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;

int main()
{
    double vol_tabung, vol_kerucut, luas_tabung, luas_kerucut, diameter, sisi_miring, jari_jari, tinggi, sisi_miring_kuadrat;
    int jenis_bangun;
    
    cout << "Program Penghitung Volume dan Luas dari Tabung / Kerucut";
    cout << "\nBangun ruang apa yang kamu ingin dihitung?"<<endl;
    cout << "\n(Pilih angka 0 jika tabung dan 1 jika kerucut)"<<endl;
    cin >> jenis_bangun;
    cout << "\nBerapa diameter bangun tersebut?"<<endl;
    cin >> diameter;
    cout << "\nBerapa tinggi bangun tersebut?"<<endl;
    cin >> tinggi;

    jari_jari=0.5*diameter;

    switch (jenis_bangun)
    {
    case 0:
        vol_tabung = PI*jari_jari*jari_jari*tinggi;
        luas_tabung = (2*PI*jari_jari*jari_jari)+(2*PI*jari_jari*tinggi);
        cout << "Volume dari tabung adalah:" << endl;
        cout << vol_tabung << endl;
        cout << "Luas permukaan dari tabung adalah:" << endl;
        cout << luas_tabung << endl;
        break;

    case 1:
        sisi_miring_kuadrat = tinggi*tinggi+jari_jari*jari_jari;
        sisi_miring = sqrt(sisi_miring_kuadrat);
        vol_kerucut = PI*jari_jari*jari_jari*tinggi/3;
        luas_kerucut = PI*jari_jari*(jari_jari+sisi_miring);
        cout << "Volume dari kerucut adalah:" << endl;
        cout << vol_kerucut << endl;
        cout << "Luas permukaan dari kerucut adalah:" << endl;
        cout << luas_kerucut << endl;
        break;
    
    default:
        cout << "Angka jenis bangunan yang kamu masukkan salah";
        break;
    }
     return 0;
}
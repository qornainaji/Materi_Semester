//menghitung volume dan luas bangun ruang dengan alas berbentuk lingkaran

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
//memasukkan variabel dan data yang akan digunakan
    string bangun_ruang, tabung, kerucut, Tabung, Kerucut;
    float d, t, v_tabung, lp_tabung, v_kerucut, lp_kerucut;
    float i = 3.14;
    float r, s;

//selection antara tabung atau kerucut
    cout << "Bangun ruang yang akan dihitung berbentuk tabung atau kerucut?";
    cin >> bangun_ruang;
    cout << bangun_ruang;
    
//memasukkan data tabung
    if(bangun_ruang == "Tabung" || bangun_ruang == "tabung")
    {
    cout << "Anda memilih untuk menghitung volume dan luas ermukaan tabung."<<"Masukkan diameter tabung:";
    cin >> d;
    cout << "Diameter tercatat." <<
    "Masukkan tinggi tabung:";
    cin >> t;

//menghitung volume dan luas tabung
    r = d/2.0;
    v_tabung = (r*r)*i*t;
    lp_tabung = (2.0*r*r*i)+(d*i*t);

//menamilkan hasil erhitungan tabung
    cout << "Volume dari tabung sebesar" << v_tabung <<
    "dan luas permukaan tabung sebesar" << lp_tabung;
    }

//memasukkan data kerucut
    else {
        cout << "Anda memilih untuk menghitung volume dan luas permukaan kerucut."<<
    "Masukkan diameter kerucut:"; 
    cin >> d;
    cout << "Diameter tercatat.";
    cout << "Masukkan tinggi kerucut:";
    cin >> t;

//menghitung volume dan luas ermukaan kerucut
    r = d/2.0;
    s = sqrt(r*r + t*t);
    v_kerucut = (1.0/3.0)*i*r*r*t;
    lp_kerucut = (i*r*r)+(i*r*s);

//menamilkan hasil erhitungan kerucut
    cout << "Volume dari kerucut sebesar" << v_kerucut <<
    "dan luas permukaan kerucut sebesar" << lp_kerucut;
    }

return 0;
}
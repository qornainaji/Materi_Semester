#include <iostream>
using namespace std;


float area (float); // deklarasi Fungsi
int main ( )
{
    float radius, y; // mengubah int menjadi float
    cin >> radius;
    y = area (radius); //melemparkan/ mengoper variable radius ke fungsi area
    cout <<"The area of the circle is "<<y;
}

float area (float r) // variabel radius dialihkan ke variabel r
{
    return ( 3.1416 *r* r) ;
}

#include <iostream>
using namespace std;

float radius, luas, volume, d;

float diameter(float);
void luaran();
float luasVolume(float);

int main()
{


    luaran();
    return 0;
}

float diameter(float r)
{
    
    cout<<"Masukkan radius bola : ";
    cin>> radius;
    d = 2*radius;
    return d;                     
}

float luasVolume(float r)
{
    float luas, volume; //Variabel Lokal
    luas =4*3.14*(radius*radius); //parameter aktual
    volume = (4*3.14*(radius*radius*radius))/3;
    cout<< "Luas permukaan bola : "<<luas<<endl;
    cout<< "Volume bola : "<<volume<<endl;
    return 0;
}

void luaran()
{
    cout<<"diameter bola = "<<diameter(radius)<<endl;
    cout<<luasVolume(radius)<<endl;
}

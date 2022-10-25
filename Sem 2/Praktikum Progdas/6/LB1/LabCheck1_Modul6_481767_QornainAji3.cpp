#include <iostream>
using namespace std;
typedef int* IntPtr; // mempermudah penamaan pointer integer

int main()
{
    IntPtr p; // deklarasi pointer p 
    // int *p;
    int a[10];
    int index;
    for (index = 0; index < 10; index++)
    {
        a[index] = index; // memberikan nilai index ke array a
    }
    p=a; //menyamakan alamat akses p dengan a agar operasi pada p akan tersimpan di variabel a
    for (index = 0; index < 10; index++)
    {
        cout<<p[index]<<" "; // tampilan dari p dengan index ke-index
    }
    cout<<endl;
    for (index = 0; index < 10; index++)
    {
        p[index] = p[index] + 1;// looping untuk menambahkan 1 pada setiap unsur array
    }
    for (index = 0; index < 10; index++)
    {
        cout<< a[index] << " "; // menampilkan a yg sudah ditambahkan 1 pada setiap unsurnya
    }
    cout<<endl;
    return 0;
}
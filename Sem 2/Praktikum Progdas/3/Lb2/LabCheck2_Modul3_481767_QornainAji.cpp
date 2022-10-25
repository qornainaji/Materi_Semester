#include <iostream>

using namespace std;

int main()
{
    int n, x, y, num;
    num=1;
    cout << "Masukkan banyaknya baris : ";
    cin >> n; 

    for(x=1; x<=n; x++)
    {
        for(y=1; y<=n; y++)
        {
            cout << num <<" ";
            num++;
        }
        cout << "\n";
    }
    return 0;
}
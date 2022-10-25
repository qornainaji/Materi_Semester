#include <iostream>
#include <chrono>
using namespace std;



int main()
{
    
    for(int i=0; i<5; i++)
    {

        auto start = chrono::steady_clock::now();
    
        int a=10;

        cout << a << "\n";

        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, milli>(diff).count() << " ms " << endl;
    }

    return 0;
}
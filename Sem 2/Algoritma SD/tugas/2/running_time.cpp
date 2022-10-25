#include <iostream>
#include <chrono>
using namespace std;



int main()
{
    
    for(int i=0; i<5; i++)
    {

        auto start = chrono::steady_clock::now();
    
        int a=10;

        for(int j=0; j<1; j++)
        {
            for(int k=0; k<5; k++)
            {
                cout << a << "\n";
            }
        }
        auto end = chrono::steady_clock::now();
        auto diff = end - start;
        cout << chrono::duration<double, milli>(diff).count() << " ms " << endl <<endl;
    }

    return 0;
}
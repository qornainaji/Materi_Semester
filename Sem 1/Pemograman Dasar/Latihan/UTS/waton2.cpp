#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    char value[52];
    int i;

    cout<<"masukkan huruf A-Z dan a-z"<<endl;
    for( i=0; i<52; i++ )
    {
        cin>>value[i];
    }

    cout<<"ini hurufnya"<<endl;
    for( i=0; i<52; i++ )
    {    
        cout<<value[i]<<endl;
    }
    return 0;
}
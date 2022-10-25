#include <iostream>

using namespace std;

int main()
{
    int x = 2;
    int *xpointer;
    cout<<x<<endl;
    //*xpointer = 2;
    //cout<<*xpointer<<endl;
    //xpointer = x;
    //cout<<*xpointer<<endl;
    //*xpointer = x;
    //cout<<*xpointer<<endl;
    //cout<<xpointer<<endl;
    //*xpointer = &x;
    xpointer = &x;
    cout<<*xpointer<<endl;

    //Passing Reference using Pointers
    //https://www.youtube.com/watch?v=_ja8iizm7nk
    return 0;
}
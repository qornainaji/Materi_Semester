#include <iostream>

using namespace std;

 

enum week { Sunday, Monday, Tuesday, Wednesday=6, Thursday, Friday, Saturday };

 

int main()

{

    week today;
    //int today;

    //today = Friday;
    cin>>today;

    cout << "Day " << today;

    return 0;

}
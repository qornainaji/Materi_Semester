#include <iostream>

using namespace std;

 

enum Choice {   EASY = 1, MEDIUM = 2,   HARD = 3};

 

//int i; //= -1;

int main()

{

Choice i;

cout<<"masukkan pilihan:";

cin >> i;

 

switch(i)

{

  case EASY:

    cout << "Easy\n";
    cout<<EASY<<endl;

    break;

  case MEDIUM:

    cout << "Medium\n";

    break;

  case HARD:

    cout << "Hard\n";

    break;

  default:

    cout << "Invalid Selection\n";

    break;

}

return 0;

}
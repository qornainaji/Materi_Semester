#include <sstream>
#include <iostream>
using namespace std;
 
void printWords(string s)
{
    // word variable to store word
    string word;
 
    // making a string stream
    stringstream iss(s);
 
    // Read and print each word.
    while (iss >> word)
        cout << word ;
}
 
// Driver code
int main()
{
    string strong = "sky is blue";
    // strong.clear();
    printWords(strong);
    return 0;
}
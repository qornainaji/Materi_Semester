//Qornain Aji
//21/481767/TK/53170

#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main()
{
    ifstream myFile;
    ofstream writeFile;

    char tag;
    stack<string> syntax;

    myFile.open("html.html");
    if (myFile.is_open())
    {
        while (!myFile.eof())
        {
            while (myFile >> tag)
            {
                string kata="";
                if (tag == '<')
                {
                    while (myFile >> tag)
                    {
                        if (tag == '>')
                        {
                            break;
                        }
                        kata = kata + tag;
                    }
                    if (kata[0] != '/')
                    {
                        syntax.push(kata);
                    }
                    else
                    {
                        if (kata.substr(1).compare(syntax.top()) == 0)
                        {
                            syntax.pop();                                   //ketika tidak menemukan perbedaan, maka akan di keluarkan karena sudah lengkap tag nya.
                        }
                        else
                        {
                            cout << "Syntax TIDAK lengkap";
                            return 0;
                        }
                    }
                }
            }
        }
    if (syntax.empty())
    {
        cout << "Syntax lengkap";
    }
    else
    {
        cout << "Sytax TIDAK lengkap";
    }
    }

    myFile.close();
    return 0;
}   
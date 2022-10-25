#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream myFile;
    ofstream writeFile;
    /*myFile.open("example.txt", ios::out); //write mode
    if(myFile.is_open())
    {
        myFile<<"Hello world!"<<endl;
        myFile<<"This is second line!"<<endl;
        myFile.close();

    }
    myFile.open("example.txt", ios::app);//append mode
    if(myFile.is_open())
    {
        myFile<<"My name is AinaChan.\n";
    }*/

    myFile.open("example.txt", ios::in);//read mode
    if(myFile.is_open())
    {
        string line, sentence = "Aina";
        int offset;
        //while(getline(myFile, line))
        while(!myFile.eof())
        { 
            getline(myFile, line);
            if((offset = line.find(sentence, 0)) != string::npos)
            {

                cout<<line<<endl;
                writeFile.open("result.txt", ios::out);
                if(writeFile.is_open())
                {
                    writeFile<<line<<endl;
                }


            }

            
        }
        myFile.close();
        writeFile.close();
    }

    return 0;
}
#include<iostream>
#include<fstream>

using namespace std;

void information(string *word);
void warning(string *word);
void error(string *word);

int main()
{
    
        
    

    string sentence;
    information(&sentence);
    warning(&sentence);
    error(&sentence);          

    

    



    return 0;
}

void information(string *word)
{
    ifstream myFile;
    ofstream writeFile;
    string line;
    int offset; 
        
    myFile.open("event_log_windows_1000.txt");
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
        
            getline(myFile, line);
            if(line[0] == 'I')
                {
                
                    writeFile.open("information.txt", ios::app);
                    if(writeFile.is_open())
                    {

                        writeFile<<line<<endl;
                        writeFile.close();
                    }
                
                }
        
        }
        
    }
    
    myFile.close();
   

}
void warning(string *word)
{
    ifstream myFile;
    ofstream writeFile;
    string line;
    int offset;
        
    myFile.open("event_log_windows_1000.txt");
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
        
            getline(myFile, line);
            if(line[0] == 'W' && line[2] == 'r')
                {
                
                    writeFile.open("warning.txt", ios::app);
                    if(writeFile.is_open())
                    {

                        writeFile<<line<<endl;
                        writeFile.close();

                    }
                
                }
        
        }
        
    }

    
    myFile.close();


}
void error(string *word)
{
    ifstream myFile;
    ofstream writeFile;
    string line;
    int offset;
        
    myFile.open("event_log_windows_1000.txt");
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
        
            getline(myFile, line);
            if(line[0] == 'E')
                {
                
                    writeFile.open("error.txt", ios::app);
                    if(writeFile.is_open())
                    {

                        writeFile<<line<<endl;
                        writeFile.close();
                    }
                
                }
        
        }
        
    }

    
    myFile.close();
    


}
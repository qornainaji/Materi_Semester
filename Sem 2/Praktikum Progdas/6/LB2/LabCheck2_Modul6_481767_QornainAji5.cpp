#include<iostream>
using namespace std;

int main()
{
    char matrix[3] [3] = {'x','x','x','x','x','x','x','x','x'};
    int i, j;
    //for diagonal matrix function
    cout<<"\n---Diagonalize Matrix X---"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                cout<<matrix[i][j];
            }else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }

    cout<<"\n---Trianglize Matrix X---"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<matrix[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
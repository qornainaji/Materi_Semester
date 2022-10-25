#include<iostream>
using namespace std;

int main()
{
    int matrix[3] [3] = {19,20,24,38,40,48,76,80,96};
    int i, j, min;
    cout<<"\n---@ Matrix @---"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<matrix[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
    
    min = matrix[0][0];
    for (i = 0; i < 3; i++)
    {
        for(j = 1; j < 3; j++)
        if (min>matrix[i][j])
        {
            min=matrix[i][j];
        }
    }
    cout<<"\nThe lowest value is : "<<min;

    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double student, mark, average;
    int i;

    
    cout<<"This is a program to find the average mark from 10 students in your class. "<<endl; 
    cout<<"Please input the mark of  the students start from the 1st student until 10th student."<<endl<<endl;
    student=0;

    for(i=1; i<=10; i++)
    {
        cout<<"Please input the mark of  the students no. "<<i<<endl;
        cin>>mark;
        student=student+mark;
        
        
        
    }
    average=student/10;
    cout<<"\nThese are the average mark of the student in your class: "<<average;
    cout<<"\nThank you for using our code."; 

     return 0;
}
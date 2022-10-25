#include<iostream>
using namespace std;
// declare functions
double add(double num1, double num2, double num3);
double avg(double sum, int n);
// main function
int main()
{
 // declare variables
 double num[3]; //Masukan berupa array double
 double sum, average;
 // take input from end-user
 cout << "Enter three Numbers :: ";
 cin >> num[0] >> num[1] >> num[2];
 // calculate sum value
 sum = add(num[0], num[1], num[2]);
 // calculate average value
 average = avg(sum, 3);
 // display result
 cout << "Sum = " << sum << endl;
 cout << "Average = " << average << endl;
 return 0;
}
// function to add three numbers
double add(double num1, double num2, double num3)
{
 return num1+num2+num3;
}
// function to calculate average of n number
double avg(double sum, int n) 
{
 return sum / n;
}

#include<iostream>
#include<math.h>

using namespace std;

void quadratic(double a, double b, double c, double *root1, double *root2);

int main(void)
{
    double x, y, z, r1, r2;

    cout<<"Enter coefficients of equation: (a, b, c)"<<endl;
    cin>>x>>y>>z;

    quadratic(x, y, z, &r1, &r2);
    
    cout<<"The first root is : "<<r1<<endl;
    cout<<"The second root is: "<<r2<<endl;

    return 0;
}

void quadratic(double a, double b, double c, double *root1, double *root2)
{
    double desc;
    desc = b*b-4*a*c;
    if(desc<0)
    {
        cout<<"No real root exit"<<endl;
    }
    else
    {
        *root1=(-b+sqrt(desc))/(2*a);
        *root2=(-b-sqrt(desc))/(2*a);
    }
}
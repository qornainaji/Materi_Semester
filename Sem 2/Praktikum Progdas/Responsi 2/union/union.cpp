#include <iostream>

using namespace std;

union abc
{
	int a;
	char b;
}var;

int main()
{
	var.a = 65;
	cout<<"a = "<<var.a<<endl;
	cout<<"b = "<<var.b;
	return 0;
}
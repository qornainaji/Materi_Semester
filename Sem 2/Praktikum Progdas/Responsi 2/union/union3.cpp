#include <iostream>

using namespace std;

union abc
{
	int a;
	char b;
}var;

int main()
{
	var.a = 90;
	union abc *p = &var;
	cout<<p->a<<" "<<p->b;
	return 0;
}
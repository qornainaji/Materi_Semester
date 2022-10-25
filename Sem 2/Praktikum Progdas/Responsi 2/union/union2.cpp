#include <iostream>

using namespace std;

union abc
{
	
	char b;
}var;

int main()
{

	cout<<sizeof(var);
	return 0;
}
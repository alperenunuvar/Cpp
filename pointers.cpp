#include <iostream>

using namespace std;

int main()
{
	// Variables
	int a;
	int *p;

	a=10;
	p=&a;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;
	cout << "a (p)(adress) = " << p << endl;
	cout << "a (&a) (adress) = " << &a << endl;
	return 0;
}
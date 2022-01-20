#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;

int main()
{
	cout << "x = " << y << endl;
	Khizhenkova::f();
	cout << "f = " << r << endl;

	cout << "x = ";
	cin >> y;
	Khizhenkova::f();
	cout << "f = " << r << endl;
	return 0;
}
#include <iostream>
#include <cmath>
int main()
{
	double x, f;
	x = 5;
	std::cout << "x = " << x << std::endl;
	f = sqrt ((x + 3)/(x - 3));
	std::cout << "f = " << f << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = sqrt((x + 3) / (x - 3));
	std::cout << "f = " << f << std::endl;
	return 0;
}




#include <iostream>
#include <cmath>

double f(double x) {
    double f;
    f = sqrt((x + 3) / (x - 3));
    return f;
}

int main() {
    double x = 5;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f(x) << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "f = " << f(x) << std::endl;
    return 0;
}
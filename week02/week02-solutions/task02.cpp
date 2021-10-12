#include <iostream>

int main() {

    double a, b, c;

    std::cout << "Enter three real numbers: ";
    std::cin >> a >> b >> c;

    std::cout << (a + b > c && a + c > b && b + c > a);
    return 0;
}
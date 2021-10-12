#include <iostream>
#include <cmath>

int main() {

    double c1, c2;
    double radius;

    double x1, x2;

    std::cout << "Enter Circle Center coordinates: ";
    std::cin >> c1 >> c2;

    std::cout << "Enter radius: ";
    std::cin >> radius;

    std::cout << "Enter point coordinates: ";
    std::cin >> x1 >> x2;

    int lineLength = sqrt((x1 - c1) * (x1 - c1) + (x2 - c2) * (x2 - c2));
    
    std::cout << std::boolalpha << (lineLength == radius);
    return 0;
}
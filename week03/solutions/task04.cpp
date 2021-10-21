#include <iostream>
#include <cmath>

int main() {

    int r1 = 2, r2 = 8;

    int x, y;

    std::cin >> x >> y;

    int expr = x * x + y * y;
    double dist = sqrt(expr);

    std::cout << ' ' << (dist < r1 || dist > r2);
    return 0;
}
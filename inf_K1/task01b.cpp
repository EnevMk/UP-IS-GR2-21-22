#include <iostream>
#include <cmath>

int main() {

    double x, y;
    std::cin >> x >> y;

    int circleX = 0, circleY = -2, circleRadius = 2;

    double distFromCircleCenter = sqrt( (x - circleX) * (x - circleX) + (y - circleY) * (y - circleY));

    std::cout << (x <= 2 && x >= -2 && y <= 2 && y >= -2 && distFromCircleCenter >= 2);


    return 0;
}
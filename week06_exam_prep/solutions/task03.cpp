#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int reversedNum = 0;
    int copy = n;

    while (n) { //same as while (n != 0)

        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }

    if (copy == reversedNum) {
        std::cout << "Yes";
    }
    else {
        std::cout << "NO";
    }
    
    return 0;
}
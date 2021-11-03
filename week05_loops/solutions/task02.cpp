#include <iostream>

int main() {

    int num;
    std::cin >> num;

    int sumOfDivisors = 1;

    for (int i = 2; i <= num / 2; ++i) {

        sumOfDivisors += (num % i == 0) ? i : 0;
    }

    if (sumOfDivisors == num) {
        std::cout << "Perfect!";
    }
    else {
        std::cout << "Not perfect.";
    }
    return 0;
}
#include <iostream>

int main() {

    int num;
    std::cin >> num;

    bool isOdd = num % 2;

    int reversed = 0;

    while (num != 0) {

        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if (reversed % 2 == isOdd) {
        std::cout << reversed << " YES" ;
    }

    else {
        std::cout << reversed << " NO" ;
    }
    return 0;
}
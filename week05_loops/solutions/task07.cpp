#include <iostream>

int main() {

    int rows;
    std::cin >> rows;

    int num = 1;

    for (int i = 1; i <= rows; ++i) {

        for (int j = 0; j < i; ++j) {

            std::cout << num << ' ';
            num++;
        }
        std::cout << '\n';
    }

    int number = 5;

    /* std::cout << ++number << '\n';
    std::cout << number; */


    return 0;
}
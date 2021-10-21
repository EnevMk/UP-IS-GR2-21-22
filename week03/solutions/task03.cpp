#include <iostream>

int main () {

    int num;
    std::cin >> num;

    std::cout << (num / 100 == num % 10 || num / 100 == (num / 10) % 10 || (num / 10) % 10 == num % 10);
    return 0;
}
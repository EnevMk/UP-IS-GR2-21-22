#include <iostream>

int main() {

    int n, m;

    std::cin >> n >> m;

    int count = 0;

    while (n != 0 && m != 0) {

        (n % 10 == m % 10) ? count++ : 1;

        n /= 10;
        m /= 10;
    }

    std::cout << count;
    return 0;
}
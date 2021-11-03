#include <iostream>

int main() {

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int j = 0; j < n - i; ++j) {

            std::cout << ' ';
        }
        for (int j = 0; j < i + i - 1; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    for (int i = n - 1; i >= 1; --i) {

        for (int j = 0; j < n - i; ++j) {

            std::cout << ' ';
        }
        for (int j = 0; j < i + i - 1; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}
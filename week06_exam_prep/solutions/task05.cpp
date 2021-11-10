#include <iostream>

//Mihail's solution
int main() {

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < 5 * n; ++j) {

            bool evenRows = n % 2;
            if (i + !evenRows == n / 2  && j >= 2 * n && j < 3 * n) {
                std::cout << '|';
            }

            else if (i + !evenRows != n / 2 && j >= 2 * n && j < 3 * n) {
                std::cout << ' ';
            }

            else if (i == 0 || i == n - 1 && (j < 2 * n || j >= 3 * n)) {
                std::cout << '*';
            }

            else if (j == 0 || (j == n * 2 - 1) || (j == n * 3) || (j == n * 5 - 1)) {
                std::cout << '*';
            }

            

            else {
                std::cout << '/';
            }

            
        }
        std::cout << '\n';
    }

    return 0;
}
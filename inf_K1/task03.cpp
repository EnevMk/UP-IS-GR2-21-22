#include <iostream>

int main() {

    int n;
    std::cin >> n;

    int colWidth = 5;

    int whiteSpaces = (n - 2) * 2;

    for (int i = 0; i < n * 2 - 1; i+=2) {

        int beginIndex = i / 2;

        for (int j = 0; j < 10 + (n - 2) * 2; ++j) {

            if (i == 0) {

                if (j < 5 || j >= 5 + (n - 2) * 2) {
                    std::cout << '*';
                }
                else {
                    std::cout << ' ';
                }
            }

            else if (i == n * 2 - 2) {

                if (j >= beginIndex && j <= beginIndex + 4 + whiteSpaces + 1 + 4) {
                    std::cout << '*';
                }
                else {
                    std::cout << ' ';
                }
            }

            else if (j == beginIndex || j == beginIndex + 4 || j == beginIndex + 4 + whiteSpaces + 1 || j == beginIndex + 4 + whiteSpaces + 1 + 4) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
            
        }
        std::cout << '\n';
        whiteSpaces -= 2;
    }


    return 0;
}
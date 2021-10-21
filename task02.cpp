#include <iostream>

int main() {

    char ch;
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {

        std::cout << "The lower case character corresponding to " << ch << " is " << (char) (ch + 'a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {

        std::cout << "The upper case character corresponding to " << ch << " is " << (char) (ch + 'A' - 'a');
    }

    else {
        std::cout << ch << " is not a character...";
    }

    return 0;
}
#include <iostream>

int main() {

    int threeDigitNumber;

    std::cout << "Enter a three digit number: ";
    std::cin >> threeDigitNumber;

    int firstDigit = (threeDigitNumber / 100);
    int secondDigit = (threeDigitNumber / 10) % 10;
    int thirdDigit =  threeDigitNumber % 10;

    std::cout << "Number digits: " << firstDigit << ' ' << secondDigit << ' ' << thirdDigit
                << "\nSum of digits: " << firstDigit + secondDigit + thirdDigit;
}
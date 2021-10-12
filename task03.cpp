#include <iostream>

int main() {

    double num1, num2;
    
    std::cout << "Enter two real numbers: \n";
    std::cin >> num1 >> num2;

    std::cout << "Sum: " << num1 + num2
                << "\nDiff: " << num1 - num2
                << "\nProd: " << num1 * num2;
    return 0;
}
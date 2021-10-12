#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	int firstDigit, secondDigit, thirdDigit;

	firstDigit = num / 100;
	secondDigit = (num / 10) % 10;
	thirdDigit = num % 10;

	std::cout << "First digit: " << firstDigit << std::endl;
	std::cout << "Second digit: " << secondDigit << std::endl;
	std::cout << "Third digit: " << thirdDigit << std::endl;
	std::cout << "Sum of digits: " << firstDigit + secondDigit + thirdDigit << std::endl;

	return 0;
}
#include <iostream>

int main()
{
	double firstNum, secondNum;

	std::cin >> firstNum;
	std::cin >> secondNum;

	std::cout << "Sum:" << firstNum + secondNum << std::endl;
	//std::abs() returns you the absolute value of the difference of two numbers. Read more on https://www.cplusplus.com/reference/cmath/abs/.
	std::cout << "Difference:" << std::abs(firstNum - secondNum) << std::endl;
	std::cout << "Product:" << firstNum * secondNum << std::endl;

	return 0;
}
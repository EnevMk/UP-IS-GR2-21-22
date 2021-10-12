#include <iostream>

int main()
{
	double a, b, c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	bool checkOne = a + b > c;
	bool checkTwo = a + c > b;
	bool checkThree = b + c > a;
	bool result = checkOne && checkTwo && checkThree;

	std::cout << std::boolalpha << result;

	return 0;
}
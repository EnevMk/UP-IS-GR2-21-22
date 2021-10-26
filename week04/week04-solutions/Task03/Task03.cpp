#include <iostream>

int main()
{
	int currentNum, sum = 0;

	do
	{
		std::cin >> currentNum;
		sum += currentNum;
	} while (currentNum != 0);

	std::cout << sum;

	return 0;
}
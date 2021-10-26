#include <iostream>

int main()
{
	int num, result = 0;
	std::cin >> num;

	while (num != 0)
	{
		result = result * 10 + num % 10;
		num = num / 10;
	}

	std::cout << result;

	return 0;
}
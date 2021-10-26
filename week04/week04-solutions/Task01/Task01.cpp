#include <iostream>

int main()
{
	int n, product = 1, sum = 0;
	std::cin >> n;

	while (n != 0)
	{
		int currentDigit = n % 10;
		product *= currentDigit;
		sum += currentDigit;
		n = n / 10;
	}

	if (product >= 100 && product < 1000)
	{
		std::cout << "YES " << product - sum << std::endl;
	}
	else
	{
		std::cout << "NO " << product << std::endl;
	}

	return 0;
}
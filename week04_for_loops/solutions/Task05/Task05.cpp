#include <iostream>

int main()
{
	int n, previousNum = 1, prePreviousNum = 1, result = 1;
	std::cin >> n;

	if (n == 0)
	{
		std::cout << "0" << std::endl;
	}

	for (int i = 1; i < n - 1; i++)//4
	{
		result = prePreviousNum + previousNum;
		prePreviousNum = previousNum;
		previousNum = result;
	}

	std::cout << result;

	return 0;
}
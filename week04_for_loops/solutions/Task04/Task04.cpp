#include <iostream>

int main()
{
	int n, maxNegativeNum = INT_MIN, currentNum;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> currentNum;

		if (currentNum < 0 && currentNum > maxNegativeNum)
		{
			maxNegativeNum = currentNum;
		}
	}

	if (maxNegativeNum != INT_MIN)
	{
		std::cout << maxNegativeNum << std::endl;
	}
	else
	{
		std::cout << "There is not any negative number." << std::endl;
	}

	return 0;
}
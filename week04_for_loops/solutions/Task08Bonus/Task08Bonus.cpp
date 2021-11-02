#include <iostream>

int main()
{
	int n, currentNum, previousNum = 1, temp;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> currentNum;
		temp = 1;

		for (int i = 0; i < previousNum; ++i)
		{
			temp *= currentNum;
		}

		std::cout << temp << std::endl;
		previousNum = currentNum;
	}

	return 0;
}
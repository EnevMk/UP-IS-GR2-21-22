#include <iostream>

int main()
{
	int n, end;

	std::cin >> n;

	end = n / 2;
	bool isPrime = true;

	for (int i = 2; i < end; i++)
	{
		if (n % i == 0)
		{
			isPrime = false;
		}
	}

	if (isPrime)
	{
		std::cout << "Num is prime";
	}
	else
	{
		std::cout << "Num is not prime";
	}

	return 0;
}
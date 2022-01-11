#include <iostream>

int countDigit(int number)
{
	int i = 0;

	while (number != 0)
	{
		i++;
		number /= 10;
	}

	return i;
}

void helper(char* str, int number, int i)
{
	str[i] = (char)((number % 10) + '0');

	if (i == 0)
	{
		return;
	}

	helper(str, number / 10, --i);
}

char* convert(int number)
{
	int digits = countDigit(number);
	char* numStr = new char[digits + 1];

	helper(numStr, number, digits - 1);
	numStr[digits] = '\0';

	return numStr;
}

int main()
{
	int num;
	std::cin >> num;
	char* numStr = convert(num);

	std::cout << numStr << std::endl;

	delete[] numStr;
	return 0;
}
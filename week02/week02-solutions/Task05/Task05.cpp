#include <iostream>

int main()
{
	int x, y;
	std::cin >> x;
	std::cin >> y;

	int circleX, circleY, r;
	std::cin >> circleX;
	std::cin >> circleY;
	std::cin >> r;

	bool result = ((circleX - x) * (circleX - x) + (circleY - y) * (circleY - y)) <= r * r;

	std::cout << std::boolalpha << result << std::endl;

	return 0;
}
#include <iostream>
 
using namespace std;
 
int main()
{
    int n = 45;

    std::cout << (n % 2 == 0 && n % 7 == 0 || n % 3 == 0 && n % 5 == 0);
}
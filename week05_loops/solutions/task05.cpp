#include <iostream> 

int main() {

    int n;
    std::cin >> n;

    int binReversed = 0;

    while (n != 0) {

        binReversed = binReversed * 10 + n % 2;
        n /= 2;
    }

    int binary = 0;
    while(binReversed != 0) {

        binary = binary * 10 + binReversed % 10;
        binReversed /= 10;
    }

    std::cout << binary;
    return 0;
}
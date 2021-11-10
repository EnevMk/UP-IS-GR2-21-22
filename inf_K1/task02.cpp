#include <iostream>

int main() {
    
    int num;
    int secondNum;

    std::cin >> num >> secondNum;

    bool flag = false;

    while (!flag && num != 0) {
        
        if (secondNum == num) flag = true;

        num /= 10;
    }

    std::cout << flag;
    

    return 0;
}
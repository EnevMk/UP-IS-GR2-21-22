#include <iostream>

int main() {

    int points;
    std::cin >> points;

    double bonus = 0;

    if (points <= 100) {

        bonus += 5;
    }

    else if (points > 1000) {
        bonus = points * 0.1;
    }
    
    else if (points > 100) {
        bonus = points * 0.2;
    }

    bonus += (points % 10 == 5) ? 2 : 0;

    bonus += (points % 2 == 0) ? 1 : 0;
    
    std::cout << "Bonus pts: " << bonus << '\n'
              << "Total pts: " << points + bonus;
    return 0;
}
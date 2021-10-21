#include <iostream>
#include <iomanip> // for setprecision()

int main() {

    double budget, priceForNight;
    int nights, expensesPercentage;

    std::cin >> budget >> nights >> priceForNight >> expensesPercentage;

    double totalPrice = 0;

    if (nights > 7) {
        priceForNight -= priceForNight * 0.05;
    }

    totalPrice += nights * priceForNight;

    double additionalExpenses = budget * expensesPercentage / 100;
    
    totalPrice += additionalExpenses;
    
    
    if (budget >= totalPrice) {
        std::cout << "Ivanovi will be left with " << std::setprecision(2) << std::fixed << budget - totalPrice;
    }

    else {
        std::cout << std::setprecision(2) << std::fixed << totalPrice - budget << " leva needed";
    }

    
    return 0;
}
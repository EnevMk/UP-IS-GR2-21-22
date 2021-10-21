#include <iostream>
#include <iomanip> // for setprecision()

int main() {

    double fahrenheit;
    char measure;

    std::cin >> fahrenheit >> measure;

    double celsium = (fahrenheit - 32) * 5 / 9;
    double kelvin = celsium + 273.15;

    std::cout.precision(2);

    if (measure == 'c') {

        std::cout << std::setprecision(2) << std::fixed << "Celsium: " << celsium;
    }

    else if (measure == 'k') {

        std::cout << std::setprecision(2) << std::fixed << "Kelvin: " << kelvin;
    }

    else if (measure == 'a') {
        
        std::cout << std::setprecision(2) << std::fixed << "Celsium: " << celsium << "\nKelvin: " << kelvin;
    }

    return 0;
}
#include <iostream>
#include <cmath>

//Да се напише функция, която приема три естествени числа a и b и k отпечатва 
//всички числа в интервата [a...b], които имат точно k различни прости делители.


// we won't consider 1 as prime
bool isPrime(int num) {
    if (num == 1 || num == 0) return 0;

    for (int i = 2; i <= sqrt(num); ++i) {

        if (num % i == 0) return false;
    }

    return true;
}

bool primeDivisorsEqualToK(int num, int k) {

    int count = 0;

    if (isPrime(num)) {
        return (1 == k); // only one divisor for a prime num
    }

    for (int i = 2; i <= num / 2; ++i) {

        if (num % i == 0 && isPrime(i)) {
            count++;
        }
    }

    return (count == k);
}


void special(int a, int b, int k) {

    for (int i = a; i <= b; ++i) {

        if (primeDivisorsEqualToK(i, k)) {

            std::cout << i << ' ';
        }
    }
}

int main() {


    special(19, 32, 1);
    //std::cout << primeDivisorsEqualToK(30, 3);

    return 0;
}
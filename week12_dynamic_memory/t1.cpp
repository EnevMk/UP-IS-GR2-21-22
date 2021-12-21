#include <iostream>

int digitsCount(int num) {

    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int* toArray(int num) {

    int copy = num;
    int size = 0;

    while (copy != 0) {
        copy /= 10;
        size++;
    }

    int* arr = new int[size];

    for (int i = size -1; i >= 0; --i) {
        arr[i] = num % 10;
        num /= 10;
    }

    return arr;
}

int main() {

    int* arr = toArray(1234);

    for (int i = 0; i < digitsCount(1234); ++i) {
        std::cout << arr[i] << ' ';
    }

    delete[] arr;
    return 0;
}
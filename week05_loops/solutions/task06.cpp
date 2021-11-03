#include <iostream>

int main() {

    int count = 0;
    int candidate = 2;
    
    while (count < 20) {

        
        int copy = candidate;
        int zeroCount = 0, oneCount = 0;

        while (copy != 0) {

            (copy % 2) ? oneCount ++ : zeroCount++;
            copy /= 2;
        }

        if (oneCount == zeroCount) {
            count++;
            std::cout << candidate << '\n';
            
        }
        candidate++;
    }
    return 0;
}
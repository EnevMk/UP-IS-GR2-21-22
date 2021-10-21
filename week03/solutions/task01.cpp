#include <iostream>

int main() {

    int age;
    bool isAbleToVote = 0;

    
    std::cin >> age;

    // if     
    /*
    if (age >= 18) {
        isAbleToVote = 1;
    } 
    return isAbleToVote; */

    

    isAbleToVote = age >= 18;

    

    return 0;
}
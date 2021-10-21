#include <iostream>

int main() {

    unsigned januaryLen = 31;
    unsigned lastSchoolDay = 22;
    unsigned date;
    std::cin >> date;

    unsigned backToSchoolDate = lastSchoolDay + date;

    unsigned month = 1;
    
    backToSchoolDate = (backToSchoolDate > januaryLen) ? backToSchoolDate - januaryLen, month++ : backToSchoolDate;

    std::cout << "Students will be back in school on " << backToSchoolDate << '.' << month << ".2006";

    

    return 0;
}
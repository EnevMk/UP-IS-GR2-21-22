#include <iostream>
 
//Ivan's solution
int main()
{
    int rowCount;
    std::cin >> rowCount;
 
    //FIRST ROW
    for (int collumn = 0; collumn < rowCount * 2; collumn++)
    {
        std::cout << "*";
    }
    for (int collumn = 0; collumn < rowCount; collumn++)
    {
        std::cout << " ";
    }
    for (int collumn = 0; collumn < rowCount * 2; collumn++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
 
    int connectedPartRow = std::ceil((rowCount - 2) / 2.0);
    //MIDDLE PART
    for (int row = 1; row <= rowCount - 2; row++)
    {
        std::cout << "*";
        for (int collumn = 1; collumn <= rowCount * 2 - 2; collumn++)
        {
            std::cout << "/";
        }
        std::cout << "*";
 
        for (int collumn = 1; collumn <= rowCount; collumn++)
        {
            if (row == connectedPartRow) {
                std::cout << "|";
            }
            else {
                std::cout << " ";
            }
        }
 
        std::cout << "*";
        for (int collumn = 1; collumn <= rowCount * 2 - 2; collumn++)
        {
            std::cout << "/";
        }
        std::cout << "*" << std::endl;
    }
    //LAST ROW
    for (int collumn = 0; collumn < rowCount * 2; collumn++)
    {
        std::cout << "*";
    }
    for (int collumn = 0; collumn < rowCount; collumn++)
    {
        std::cout << " ";
    }
    for (int collumn = 0; collumn < rowCount * 2; collumn++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}
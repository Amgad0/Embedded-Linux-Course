#include "iostream"

int main(){
    
    int firstNO = 0, secondNO = 0, thirdNO = 0, max = 0;

    std::cout << "Enter first no: ";
    std::cin >> firstNO;
    std::cout << "Enter second no: ";
    std::cin >> secondNO;
    std::cout << "Enter third no: ";
    std::cin >> thirdNO;

    if (firstNO > secondNO)
    {
        max = firstNO;
        if (thirdNO > max)
        {
            max = thirdNO;
        }
    }
    else {
        max = secondNO;
        if (thirdNO > max)
        {
            max = thirdNO;
        }
    }

    std::cout << "Max number is: " << max << std::endl;


    
    return 0;
}
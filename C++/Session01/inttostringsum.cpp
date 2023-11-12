#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string

int main (){

    int x = 0, sum = 0;
    std::cout << "Enter an integr: ";
    std::cin >> x;
    std::string numstr = std::to_string(x);
    std::cout << "String is: " << numstr << std::endl;

    for (int i = 0; i < numstr.length(); i++) {
        
        sum = sum + numstr[i] - 48;
        std::cout << numstr[i] << std::endl;
    }
    std::cout << "Sum of digits is: " << sum << std::endl;
    return 0;
}
#include <bitset>
#include <iostream>

int main(){

    int dec;
    std::cout << "Enter decimal number: ";
    std::cin >> dec;
    std::bitset<8> binary(dec);

    std::cout << "Decimal converted to binary = " << binary << std::endl;
    return 0;
}
#include <algorithm>
#include <array>
#include <iostream>

int main() {

    std::array<int, 5> myArray = {4, 7, 1, 0, 6};

    std::cout << "Max element in the array is: " << *std::max_element(myArray.begin(),myArray.end()) << std::endl;

    return 0;
}

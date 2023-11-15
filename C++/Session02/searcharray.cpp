#include <array>
#include <iostream>
#include <algorithm>

void search(std::array<int, 5>& arr, int searchValue) {

    auto result = std::find(arr.begin(), arr.end(), searchValue);

    if (result != arr.end()) {
        std::cout << "Element is found at index: " << std::distance(arr.begin(), result) << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }


}

int main() {
    
    int find = 0;
    std::array<int, 5> myArray = {4, 7, 1, 0, 6};
    std::cout << "Enter no. to search for: ";
    std::cin >> find;

    search(myArray, find);

    return 0;
}
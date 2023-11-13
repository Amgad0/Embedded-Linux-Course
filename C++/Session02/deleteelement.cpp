#include <array>
#include <algorithm>
#include <iostream>

void deleteAndPrint(std::array<int, 6>& arr, int elementToDelete) {
    auto it = std::remove(arr.begin(), arr.end(), elementToDelete);

    if (it != arr.end()) {
        for (auto iter = arr.begin(); iter != it; ++iter) {
            std::cout << *iter << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
}

int main() {
    std::array<int, 6> myArray = {2, 6, 3, 5, 3, 7};
    int elementToDelete = 0;
    std::cout << "Enter number to delete: ";
    std::cin >> elementToDelete;

    deleteAndPrint(myArray, elementToDelete);

    return 0;
}
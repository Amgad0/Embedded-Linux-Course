#include <iostream>
#include <array>

// Function to merge two arrays
void findoddeven(const std::array<int, 10>& arr) {
    std::cout << "Odd numbers: ";
    for (int num : arr) {
        if (num % 2 != 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Even numbers: ";
    for (int num : arr) {
        if (num % 2 == 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

}

int main() {
    std::array<int, 10> arr = {10,2, 5, 7, 1, 3, 6, 9, 4, 8};

    findoddeven(arr);

    return 0;
}


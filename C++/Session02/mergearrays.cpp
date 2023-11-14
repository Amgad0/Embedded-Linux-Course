#include <iostream>
#include <array>
#include <algorithm>

// Function to merge two arrays
std::array<int, 10> mergeArrays(const std::array<int, 5>& arr1, const std::array<int, 5>& arr2) {
    std::array<int, 10> result; // Assuming the merged array has a size of 10

    
    std::merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), result.begin());

    return result;
}

int main() {
    // Creating two sorted arrays
    std::array<int, 5> arr1 = {5, 7, 1, 3, 9};
    std::array<int, 5> arr2 = {2, 4, 6, 8, 10};
    std::sort(arr1.begin(), arr1.end(), [](int a, int b) {return a < b;});

    // Merging the arrays
    std::array<int, 10> mergedArray = mergeArrays(arr1, arr2);

    // Printing the merged array
    for (int element : mergedArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}


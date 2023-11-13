#include <array>
#include <iostream>

// Function taking std::array by reference
int findmax(std::array<int, 5>& arr) {

    int max = 0;
    for (int i=0; i < arr.size(); i++) {
        if (arr[i] > max) {
            
            max = arr[i];
        }
    }

    return max;    
}

int main() {
    // Creating an std::array
    std::array<int, 5> myArray = {4, 7, 1, 0, 6};

    // Passing the std::array to the function
    std::cout << "Max element in the array is: " << findmax(myArray) << std::endl;

    return 0;
}

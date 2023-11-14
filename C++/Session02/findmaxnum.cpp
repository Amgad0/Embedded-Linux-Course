#include <array>
#include <iostream>


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

    std::array<int, 5> myArray = {4, 7, 1, 0, 6};

    std::cout << "Max element in the array is: " << findmax(myArray) << std::endl;

    return 0;
}

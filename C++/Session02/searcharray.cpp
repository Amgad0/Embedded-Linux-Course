#include <array>
#include <iostream>

void search(std::array<int, 5>& arr, int num) {

    
    for (int i=0; i < arr.size(); i++) {
        if (arr[i] == num) {

            std::cout << "Number exists with index:  " << i << std::endl;
            return;
        }
    }
    std::cout << "Number " << num << " doesn't exist in the array." << std::endl;
}

int main() {
    
    int find = 0;
    std::array<int, 5> myArray = {4, 7, 1, 0, 6};
    std::cout << "Enter no. to search for: ";
    std::cin >> find;

    search(myArray, find);

    return 0;
}

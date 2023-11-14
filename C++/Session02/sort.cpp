#include <iostream>
#include <algorithm>
#include <array>

int main() {
    std::array<int,6> numbers = {5, 2, 9, 1, 5, 6};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {return a > b;});
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

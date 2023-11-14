#include <iostream>
#include <cmath>
#include <iterator>


int main() {
    auto sq = [](int a){return pow(a,2);};
    std::cout << sq(4) << std::endl;

    return 0;
}


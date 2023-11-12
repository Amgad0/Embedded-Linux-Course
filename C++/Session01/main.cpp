#include "iostream"

int main(){
    // int x;
    // std::cout <<"Enter a value: ";
    // std::cin >> x;
    // std::cout <<"Int value is: "<< x << std::endl;

    for (int i=0; i <= 5; i++) {
        if (i == 3) {
            std::cout << "Skipping this iteration " << i << std::endl;
            continue;
        }
        if (i == 5) {
            std::cout << "Breaking the loop at iteration " << i << std::endl;
            break;
        }
        std::cout << "Iteration " << i << std::endl;
    }
    
    return 0;
}
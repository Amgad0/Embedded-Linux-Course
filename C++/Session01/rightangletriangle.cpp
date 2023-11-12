#include "iostream"

int main(){
    
    int a = 0, b = 0, c = 0;

    std::cout << "Enter first side: ";
    std::cin >> a;
    std::cout << "Enter second side: ";
    std::cin >> b;
    std::cout << "Enter hypotenus side: ";
    std::cin >> c;

    if ( ( (a^2) + (b^2) ) == (c^2) ){
        
        std::cout << "Triangle is right angled " << std::endl;
    }
    else {

        std::cout << "Triangle is not right angled " << std::endl;    

    }

    return 0;
}
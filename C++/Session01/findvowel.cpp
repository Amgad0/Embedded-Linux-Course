#include <iostream>
#include <string>

int main(){

    char letter = 0;
    std::string str = "aeiouAEIOU";
    std::cout << "Enter letter: ";
    std::cin >> letter;

    if (str.find(letter) != std::string::npos) {

        std::cout << "Letter is a voawel " << std::endl;

    }
    else {

        std::cout << "Letter is not a voawel " << std::endl;

    }

    return 0;
}
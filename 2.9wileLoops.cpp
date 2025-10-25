#include <iostream>

int main() {
    
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    while (1 == 1)
    {
        std::cout << "Help \n";
    }

    std::cout << "Hello " << name ;

    return 0;
}
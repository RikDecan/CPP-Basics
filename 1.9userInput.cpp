#include <iostream>

    //cout << (insertion opperator)
    //cin >> (extraction opperator)

int main() {

    std::string name;
    std::string age;

    std::cout << "whats your age?" << '\n' ;
    std::cin >> age; 

    std::cout << "whats your full name?" << '\n' ;
    //voor strings die spaties kunnen bevatten gebruik je het volgende 
    // de std::ws is voor whitespace
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.. Damn bro..." << std::endl;
   


    return 0;
}
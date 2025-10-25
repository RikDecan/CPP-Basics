#include <iostream>

std::string concat(std::string firstName, std::string lastName);


int main() {

    std::string firstName = "Rik";
    std::string lastName = "Decan";
    std::string fullName(concat(firstName, lastName));

    std::cout << "Hello " << fullName << '\n' ;

    return 0;
}

std::string concat(std::string firstName, std::string lastName){

    return firstName + " " + lastName;   
}

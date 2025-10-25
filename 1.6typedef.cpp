#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int >> pairList_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;


int main() {

    text_t firstName = "Rik";
    number_t age = 24; 

    std::cout << firstName << '\n';
    std::cout << age << std::endl;

    return 0;
}
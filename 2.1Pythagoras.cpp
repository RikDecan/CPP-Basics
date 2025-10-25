#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Give me your first variable" << '\n';
    std::cin >> a ;
    
    std::cout << "Give me your second variable" << '\n';
    std::cin >> b ;

    c = sqrt(pow(a, 2) + pow(b, 2));
    

    std::cout << "hypotenusa is " << c << std::endl;
    return 0;
}
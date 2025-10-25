#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    char op; 
    double num1;
    double num2;
    double result; 


    cout << "*************************Calculator****************************** \n";

    cout << "Enter either (+ - * /):  ";
    cin >> op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
    result = num1 + num2;
    cout << "Result: " << result << '\n' ; 
        break;
    case '-':
    result = num1 - num2;
    cout << "Result: " << result << '\n' ; 
        break;
    case '*':
    result = num1 * num2;
    cout << "Result: " << result << '\n' ; 
        break;
    case '/':
    result = num1 / num2;
    cout << "Result: " << result << '\n' ; 
        break;    
    default:
    cout << "Please enter the right parameters \n";
        break;
    }
    cout << "\n" << "*****************************************************************";








    std::cout << "Hello World!" << std::endl;
    return 0;
}
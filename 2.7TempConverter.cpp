#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    double temp;
    char unit;

    cout << "********************** Temperature conversion ************************* \n";
    cout << "F = Fahrenheit \n";
    cout << "C = Celsius \n";
    cout << "What unit would you like to conver to?: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temp in Celsius: ";
        cin >> temp;
        temp = (1.8 * temp) + 32.0; 
        cout << "Your temperature in Fahrenheit is " << temp <<"F";

    }else if( unit == 'C' || unit == 'c'){
        cout << "Enter the temp in Fahrenheit: ";
        cin >> temp;
        temp = (temp -32 ) * 1.8; 
        cout << "Your temperature in Celsius is " << temp <<"C";
    }else{
        cout << "Please enter a valid unit";
    }

    cout <<  " \n ********************************************************************** \n";
 
    return 0;
}
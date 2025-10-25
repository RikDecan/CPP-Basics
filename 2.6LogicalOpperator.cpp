#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    // && = check if two conditions are true 
    // || = check if at least one condition is true 
    // ! = reverse the logical state of the its opperand

    int temp;
    bool sunny = true;

    cout << "Enter the temp: ";
    cin >> temp ; 

    if (temp > 0 && temp < 30)
    {
        cout << "The temp is good";
    }
    else{
        cout << "The temp is bad";
    }

    if (!sunny)
    {
        cout << "It is sunny";
    }
    else{
        cout << "It is cloudy";
    }
    
    
    return 0;
}
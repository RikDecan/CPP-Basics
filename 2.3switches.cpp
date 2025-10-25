#include <iostream>

int main() {
    using std::cout;
    using std::cin;


    char grade;
    cout << "What letter grade?: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "great";
    break;
    case 'B':
        cout << "good";
    break;
    case 'C':
        cout << "okay";
    break;
    case 'D':
        cout << "not good";
    break;
    case 'F':
        cout << "terrible";
    break;

    default:
        cout << "Please in only letter grade (A - F)";
        break;
    }


    return 0;
}
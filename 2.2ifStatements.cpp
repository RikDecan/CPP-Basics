#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int age;

    cout << "Enter your age: " ;
    cin >> age; 
    
    if (age >= 100)
    {
        cout << "You are too old to enter the site";
    }else if(age < 0 ){
        cout << "You have not been born yet!";
    }else if(age >= 18){
        cout << "welcome to the site!";
    }else{
       cout << "You are not allowed to enter";
    }
    return 0;
}
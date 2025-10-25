#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int grade = 85;

    // normale manier van if statement

    if (grade >= 50)
    {
        cout << "You passed!";
    }else{
        cout << "You failed...";
    }

    // tenerary operator
    

    grade >= 50 ? cout << "You passed!" : cout << "You failed..";


    //voor booleans

    bool hungry = true;

    hungry? cout << "You are hungry" : cout << "You are NOT hungry";

    //andere manier 

    cout <<(hungry? "You are hungry" : "You are NOT hungry");
    
    return 0;
}
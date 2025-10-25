#include <iostream>

int main() {
    //als je deze namespace gebruikt moet je niet std:: gebruiken voor acties zoals hier
    //gevaarlijk want std heeft heel veel components en kan zorgen voor naming conflicts
    using namespace std;
    // je kan destructuring gebruiken zoals 
    using std::cout; //zo neem je niet alles van std in je file


    string name = "Rik"; 

    cout << "Hello World!" << std::endl;
    return 0;
}
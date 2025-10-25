#include <iostream>
using namespace std;

// een naam van een functie en de parameters van een functie = function signature
//functies kunnen dezelfde naam hebben maar niet exact dezelfde naam EN parameters!!

    void bakePizza();    
    void bakePizza(string topping1);
    void bakePizza(string topping1, string topping2);

int main() {
    bakePizza();
    return 0;
}

void bakePizza(){
    cout << "here's your pizza \n";    
}

void bakePizza(string topping1){
    cout << "here's your pizza with " << topping1 << "\n";    
}

void bakePizza(string topping1, string topping2){
    cout << "here's your pizza with " << topping1 << " and " << topping2<< "\n";    
}


#include <iostream>

//local variables = declared inside a func blok
//global variables = declared outside all funcs :) 

void printNum();

int globalNum = 5 ; //globale variable -> overal verkrijgbaar


int main() {
    int localNum = 1; //lokale var binnenin de functie main()
    std::cout << localNum; 
    return 0;
}

// void printNum(){
//     std::cout << localNum; //this wont work since localNum is neither given in the params and-or not a global var
// }


void printNum(){
    std::cout << globalNum; //this will work since globalNum a global variavle
}

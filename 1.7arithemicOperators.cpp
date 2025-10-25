#include <iostream>

int main() {


    //c++ volgt dezelfde regels voor het oplossen van een formule zoals in basiswiskunde
    //1. haakjes ()
    //2. vermenigvuldigen * &  verdelen /
    //3. optellen + & aftrekken - 

    double formule = 6 - 5 + 4 * 3 / 2; // moet 7 zijn 
    double resultaat = formule; 

    std::cout << resultaat; 


    //maak dit dubbel voor als je resultaat decimalen bevat.
    // double students = 20;
    int students = 21;

    // students = students + 1;
    // students+=1;
    // students++; //increment

    // students = students -1;
    // students -=1;
    // students --; //decrement

    // students = students * 2 ;
    // students*=2;

    // students = students / 2; 
    // students/=2;

    //hoeveel er overblijft 
    int remainder = students % 2;
    
    // std::cout << remainder << std::endl;
    return 0;
}
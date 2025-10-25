#include <iostream>
#include <ctime>


int main() {

    int num;
    int guess;


    srand(time(0));
    int randNum = (rand() % 5) + 1; 

    std::cout << randNum;

    do
    {
        std::cout << "Guess the number between 1 - 5:  ";
        std::cin >> guess;        
    } while (guess != randNum);

    std::cout << "Congrats! you guessed right! " << randNum << " was the number!";


    return 0;
}
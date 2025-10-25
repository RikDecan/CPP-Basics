#include <iostream>
#include <ctime>


int main() {

    int num;
    int guess;


    srand(time(0));
    int randNum = (rand() % 80) + 1; 

    // std::cout << randNum;

    std::cout << "A random number is generated between 1 and 80. \n Guess the number between 1 - 80:  ";
    do
    {
        std::cin >> guess; 
        if (guess > randNum )
        {
            std::cout << "Guess Lower. Try again: "; 
        }else if (guess < randNum)
        {
            std::cout << "Guess Higher. Try again: "; 
        }        
    } while (guess != randNum);
    std::cout << "Congrats! you guessed right! " << randNum << " was the number!";
    return 0;
}
#include <iostream>


void happyBirthday(std::string name, int age); //declareer de functie her als je de functie onder de main functie wil plaatsen

int main() {

    std::string name = "Bro";
    int age = 24;

    happyBirthday(name, age); //name als argument

    return 0;
}

void happyBirthday(std::string name, int age) //als parameters geen je eerst het datatype en dan de naam van het arg
{
    std::cout << "Happy Birthday " << name << "! \n";
    std::cout << "Today you turn " << age << "! \n";
}

// void happyBirthday(std::string birthdayboy) //je kan ook de parameter een andere naam geven, maar dan moet je die in je functie aanpassen.
// {
//     std::cout << "Happy Birthday to " << birthdayboy << "! \n";  
// } //dit werkt dus ook -> krijgt name maar gebruikt in de functie birthdayboy







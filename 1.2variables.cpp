#include <iostream>

    int main(){

        //integer (whole num)
        int age = 24;
        int year = 2025;
        int days = 7.5;

        //double (num w/ decimal)

        double price = 10.99;
        double gpa = 2.5;
        double temp = 25.1;

        //char -> single character
        char grade = 'A';
        char initial = 'B';
        char currency = '$';

        //boolean (true or false)
        bool student = true;
        bool poweron = false;
        bool forSale = true;

        //string (objects that represent a seq of text)
        std::string fname = "Rik";
        std::string day = "friday";
        std::string food = "Pizza";
        std::string adress = "123 fake St.";

        std::cout << "Hello " << fname << '\n' ;
        std::cout << "You are " << age << " years old" << '\n' ;


        return 0;
    }
#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance); 

int main() {

    
    double balance = 0.0;
    int choise = 0;

    do
    {
    std::cout << "****************** \n";
    std::cout << "Enter your choise: \n";
    std::cout << "****************** \n";
    std::cout << "1. Show balance \n";
    std::cout << "2. Deposit money \n";
    std::cout << "3. Withdraw money \n";
    std::cout << "4. Exit \n";
    std::cin >> choise; 

    std::cin.clear();
    fflush(stdin);

    switch (choise)
    {
    case 1: showBalance(balance);  break;
    case 2: balance += deposit(); showBalance(balance); break;
    case 3: balance -= withdraw(balance); showBalance(balance); break;
    case 4: std::cout << "Thanks for visiting!"; break;
    
    default: std::cout << "Enter a valid value \n"; break;
    }

    } while (choise != 4);
    
    return 0;
}


void showBalance(double balance){
    std::cout << "Current balance: EUR " << std::setprecision(2) << std::fixed << balance << std::endl;

}

double deposit(){
    double amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount entered. Deposit amount must be positive." << std::endl;
        return 0.0;
    }

    return amount;
}

double withdraw(double balance){    
    double amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "insufficient funds... a.k.a you broke" << std::endl;
        return 0.0;
    }

    if(amount < 0){
        std::cout << "Invalid amount entered. Withdrawl amount must be positive." << std::endl;
        return 0.0;
    }

    return amount;    
}
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;

    // Ook zo mogelijk 
    // using namespace std;

    string name; 

    cout << "Enter your name: ";
    getline(cin, name);


    name.length(); //geeft de lengte van de charakters in name

    if (name.length() > 12 )
    {
        cout << "your name cant be over 12 chars";
    }else{
        cout << "welcome " << name ;
    }

    name.empty(); // geeft een boolean terug -> als name empty is = true, zo niet = false

    name.clear(); // maakt de string name leeg

    name = "rik";
    name.append("@gmail.com"); //voegt extra stuk toe aan je string => name = rik@gmail.com

    name.at(0); //geeft de het eerste character in de string terug in dit geval 'r'
    name.at(2); // => k 
    //index begint bij 0 niet bij 1

    name.insert(0, "@"); //voegt @ toe op de eerste plaats => vervangt de r niet maar word dus @rik@gmail.com
    
    name.find(' '); //vind een spatie en returnt de index
    
    name.erase(0, 3); //verwijderd de eerste 3 chars in een string 3 is eind index => 3 word niet verwijderd

    










    
        
    return 0;
}
#include <iostream>

int main() {

    //type conversion => conversion of a value from one datatype to another
    // Implicit => automatic
    // Explicit => precede value with new datatype (int) x

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;


        
    std::cout << score << " %" <<'\n';

    return 0;
}
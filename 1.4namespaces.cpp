#include <iostream>

//de namespace voorziet een oplossing voor naming conflicts

namespace first{
    int x = 1; 
}

namespace second{
    int x = 2;
}

int main() {
    using namespace first;
    using std::cout;
    
     //hier geen std::cout nodig maar gewoon cout => zie line 15
    cout << x << std::endl;
    return 0;
}
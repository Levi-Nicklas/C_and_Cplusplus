#include <iostream>
using namespace std;

// Do I need to buy groceries?
bool buyGroceries(bool outOfOnions, bool outOfTomatoes){
    if(outOfOnions && outOfTomatoes){
        return true;
    } else {
        return false;
    }
}


int main() {
    //Ternary Operator
    string result = buyGroceries(true,false) ? "Buy Stuff! " : "Wait to buy stuff. ";
    // endl adds a line break to the print out.
    cout << result << endl;
    return(0);
}
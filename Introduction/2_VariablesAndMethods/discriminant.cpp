#include <iostream>
using namespace std;




double discriminant(int a, int b, int c){
    return b*b - 4*a*c;
}

int main(){
    // Calculates the discriminant.
    // b^2-4*a*c

    //User Prompt
    cout << "Enter a Number for a:";
    int a;
    cin >> a;

    cout << "Enter a Number for b:";
    int b;
    cin >> b;

    cout << "Enter a Number for c:";
    int c;
    cin >> c;

    //double discrim = b*b - 4*a*c;
    double discrim = discriminant(a,b,c);
    cout << "The discriminant is: " << discrim;

    return 0;
}
#include<iostream>

using namespace std;

/*agr mn yhn aik global variable bna du to tb bi output mn hmain local variable hi mily gi jis wja sa global variable ko print krwany ky
 liye hm use kryn gy Scope resolution operator (::) jo k global variable ko access krny ky liye use hota hy.*/


int c = 45; // global variable


int main() {
    int a, b, c;
    cout << "Enter the value of a  " << endl;
    cin >> a;
    
    cout << "Enter the value of b  "  << endl;
    cin >> b;
   
c = a + b;
   
    cout << "The sum of a and b is: " << c << endl;
    
    cout << "The value of global variable c is: " << ::c << endl; // using scope resolution operator to access global variable c4


    return 0;
}
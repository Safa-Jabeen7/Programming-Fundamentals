#include<iostream>
using namespace std;    
int main() {
    float a = 34.4;
    long double b = 34.4;

    // Its all about float and long double data types in c++ programming language. 
 
  // 8 bytes by default it is double data type in c++ programming language.It will show that it is float data type in c++ programming language.  
cout << "The Size of 34.4 is: " << sizeof(34.4) << endl;

// 4 bytes Float data type ko show keny ky liye hm small f ya capital F use kryn gy .
cout << "The Size of 34.4f is: " << sizeof(34.4f) << endl;
cout << "The Size of 34.4F is: " << sizeof(34.4F) << endl;

// 16 bytes for long double data type we will use small or capital l and L respectively.
cout << "The Size of 34.4l is: " << sizeof(34.4l) << endl;
cout << "The Size of 34.4L is: " << sizeof(34.4L) << endl;


}
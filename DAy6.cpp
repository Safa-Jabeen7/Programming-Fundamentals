#include<iostream>

using namespace std;

int main(){
 int a=5 , b=10;

 cout<< "operators in C++"<<endl;

 cout<< "Following are the types of operators in C++"<<endl; 

//  Arithmetic operators

 cout<< "a + b = "<< a + b <<endl; /*1.Addition*/ 

 cout<< "a - b = "<< a - b <<endl;  /*2.Subtraction*/

 cout<< "a * b = "<< a * b <<endl; /*3.Multiplication*/

cout<< "a / b = "<< a / b <<endl;       /*4.Division*/

cout<< "a % b = "<< a % b <<endl; /*5.Modulus*/

cout<< "a++ = "<< a++ <<endl; /*6.Post-increment*/

cout<< "a-- = "<< a-- <<endl; /*7.Post-decrement*/

cout<< "++a = "<< ++a <<endl; /*8.Pre-increment*/

cout<< "--a = "<< --a <<endl; /*9.Pre-decrement*/

cout<<endl;


// Assignment operators --> used to assign values to variables

// int c = 5; // Here, = is an assignment operator that assigns the value 5 to variable c
// char d = 'A'; // Here, = is an assignment operator that assigns the value 'A' to variable d


// Comparison operators --> used to compare two values

cout<< "Following are the comparison operators in C++"<<endl;

cout<< "a == b = "<< (a == b) <<endl; /*1.Equal to*/

cout<< "a != b = "<< (a != b) <<endl; /*2.Not equal to*/

cout<< "a > b = "<< (a > b) <<endl; /*3.Greater than*/

cout<< "a < b = "<< (a < b) <<endl; /*4.Less than*/

cout<< "a >= b = "<< (a >= b) <<endl; /*5.Greater than or equal to*/

cout<< "a <= b = "<< (a <= b) <<endl; /*6.Less than or equal to*/

cout<<endl;

// Logical operators --> used to combine two values

cout<< "Following are the logical operators in C++"<<endl;

cout<< "the value of (a==b) && (a<b) = "<< ((a==b) && (a<b)) <<endl; /*1.Logical AND*/
cout<< "the value of (a==b) || (a<b) = "<< ((a==b) || (a<b)) <<endl; /*2.Logical OR*/
cout<< "the value of !(a==b) = "<< (!(a==b)) <<endl; /*3.Logical NOT*/  


cout<<endl;



    return 0;
}
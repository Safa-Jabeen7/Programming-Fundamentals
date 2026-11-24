#include<iostream>
using namespace std;
 int glo=6;
// sb sy pehle print ho ga global variable then local agr hm dono mn cout kryn
void sum(){

    int a;
// we can make same name for local and global variables but local variable will get the presedence
   
    cout<<glo;
 
}
int main(){
 
    // learning local and global variables
     int glo = 9;

    // if we will modify the local variable the output will be a local variable
       glo = 78;


    sum();

    cout<<glo;


}
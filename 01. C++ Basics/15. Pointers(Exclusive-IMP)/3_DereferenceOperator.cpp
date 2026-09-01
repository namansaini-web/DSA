#include<iostream>
using namespace std ; 
int main(){
    // Changing value of variable with the help of pointer //
    // Dereference Operator //
    int x = 7; 
    int* ptr = &x;
    cout<< &x <<endl;
    cout<< x <<endl;
    *ptr = 70;
    cout<< x <<endl;

    *ptr += 10;
    cout<< x <<endl;
}
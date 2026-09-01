#include<iostream>
using namespace std ;
int main(){
    int* p1;
    int* p2;
    // p1 = &p2 --> give an error beacuse we can't store an address like that //

    int x = 10;
    int* P1 = &x;
    int** P2 = &P1;  // Double Pointer //
    cout<< &x <<endl;
    cout<< P1 <<endl;

    cout<< &P1 <<endl;
    cout<< P2 <<endl;
} 
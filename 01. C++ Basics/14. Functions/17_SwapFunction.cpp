#include<iostream>
using namespace std ;

void Swap(int& a, int& b){  // alias operator //
    int temp = a ;
    a = b ;
    b = temp ;
}

int main(){
    int a = 5, b = 2 ;
    // swap(a,b) ;    built-in function
    Swap(a,b) ;
    cout<< a <<" "<< b <<endl ;
}
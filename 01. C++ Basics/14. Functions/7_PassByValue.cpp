#include<iostream>
using namespace std ;

void change(int x){ // This x is local to change function //
    x = 20 ;
}

int main(){
    int x = 10 ;  // This x is local to main function //
    change(x) ;
    cout<< x << endl ;

    // Here both x in main and change function are different ,
    // only there value is going from function to function //
}

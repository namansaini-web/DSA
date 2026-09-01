#include<iostream>
using namespace std ;
int main(){
    int x = 6 ;
    int y = (x > 12) ? x-4 : x*4 ;
    cout<< y <<endl ;

    int x1 = 6 ;
    int y1 = (x1++ > 12) ? x1*4 : x1*4 ;
    cout<< y1 <<endl ;


// Nested Ternary Opertors //
    int a = 6 ;
    int b = (x <= 23) ? ((x > 12) ? x-4 : x*4) : ((x < 12) ? x/4 : x+4) ;
    cout<< y <<endl ;

}
    


// Take a four digit number input and tell it is a four digit number or not //

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    if(n<0) n *= -1 ;
    if ( n >= 1000 and n <= 9999 ) cout<<" Four digit number ! " ;  // Here we can use '&&' instead of 'and', which is a logical and //
    else cout<<" Not a four digit number ! " ;

}
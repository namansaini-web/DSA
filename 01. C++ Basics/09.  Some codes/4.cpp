#include<iostream>
using namespace std ;
int main(){
    float a ;
    cout<<"Enter first number : " ;
    cin>> a ;

    float b ;
    cout<<"Enter second number : " ;
    cin>> b ;

    float c ;
    cout<<"Enter third number : " ;
    cin>> c ;

    if ( (a >= b) and (b >= c) ) cout<< a <<" is the greatest number among the three ! " ;
    else if ((b >= a) and (b >= c)) cout<< b <<" is the greatest number among the three ! " ;
    else cout<< c <<" is the greatest number among the three ! " ;
}
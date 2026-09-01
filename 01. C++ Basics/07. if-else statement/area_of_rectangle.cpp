#include<iostream>
using namespace std ;
int main(){ 
    float L ;
    cout<<"Enter length of rectangle : " ;
    cin>> L ;
    float B ;
    cout<<"Enter breadth of rectangle : " ;
    cin>> B ;

    float P = 2*(L + B) ;
    float A = L*B ;

    if ( A > P ) cout<<" Area is greater then perimeter. " ;
    else cout<<" Perimeter is greater then area. " ;

}
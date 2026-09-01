// Take 3 positive integers input and tell is they can be sides of a triangle of not  //

#include<iostream>
using namespace std ;
int main(){
    float s1 ;
    cout<<"Enter first side : " ;
    cin>> s1 ;

    float s2 ;
    cout<<"Enter second side : " ;
    cin>> s2 ;

    float s3 ;
    cout<<"Enter third side : " ;
    cin>> s3 ;

    if ( (s1 + s2 > s3) and (s1 + s3 > s2) and (s2 + s3 > s1) ) cout<<" Valid triangle ! " ;
    else cout<<" Invalid triangle ! " ;
    
}
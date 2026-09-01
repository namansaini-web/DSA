#include<iostream>
using namespace std ;
int main(){
    int num ;
    cout<<"Enter your number : ";
    cin>> num;
     
    //if ( num < 0) cout<< -num  ;
    //else cout<< num ;

    if ( num < 0 ) num *= -1 ;
    cout<< num ; 

}
#include<iostream>
using namespace std ;
int main(){
    // Take n as input and print the required sequence //
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    for ( int i = 1 ; i <= n ; i++ ){
        cout<< i << " " << n-(i-1) << endl ;
    }
}
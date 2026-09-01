#include<iostream>
#include<cmath>
using namespace std ;

// Take n and r as input and print nCr and nPr //
int fact(int x){
    int fact = 1 ;
    for(int i=1 ; i<=x ; i++){
        fact *= i ;
    }
    return fact ;
}
int main(){
    int n, r ;
    cout<<"enter value of n : " ;
    cin>> n ;
    cout<<"enter value of r : " ;
    cin>> r ;

    if (r > n || r < 0) {
        cout << "Invalid input";
        return 0;
    }
    int nCr = fact(n) / (fact(r)*fact(n-r)) ;
    cout<<"nCr is "<< nCr << endl ;

    int nPr = fact(n) / fact(n-r) ;
    cout<<"nPr is "<< nPr << endl ;
}
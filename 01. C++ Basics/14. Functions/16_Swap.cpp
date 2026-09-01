#include<iostream>
using namespace std ;

int main(){
    int a=8 , b=7 ;
    cout<< a <<" "<< b <<endl ;
    a = b ;
    b = a ; 
    cout<< a <<" "<< b <<endl ;

    int x, y ;
    cin>> x >> y ;
    x = y ;
    y = x ;
    cout<< x <<" "<< y <<endl ;
    // In ths case value of x will not swap so, //

    // Method 1 //
    int X, Y ;
    cin>> X >> Y ;
    int temp = X ;
    X = Y ;
    Y = temp ;
    cout<< X <<" "<< Y <<endl ;


    // Method 2 //
    int A, B ;
    cin>> A >> B ;
    A = A+B ;
    B = A-B ;
    A = A-B ;
    cout<< A <<" "<< B ;

    // Method 3 // 
    //    [a = (a + b)-(b = a)] 
}
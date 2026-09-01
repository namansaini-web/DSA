#include<iostream>
using namespace std ;
int main(){
    // Print table of 19 : //
    for (int i = 1 ; i <= 10 ; i++){
        cout<<"19 "<<"* "<< i <<" = "<< 19*i <<endl ;
    }
    for (int i = 19 ; i <= 190 ; i++){
        if(i % 19 == 0) cout<< i << endl ;
    }
    for ( int i = 19 ; i <= 190 ; i += 19 ){
        cout << i << endl ;
    }


    // Print table of n as user input //
    int n ;
    cout <<"Enter your number : " ;
    cin >> n ;
    for ( int i = 1 ; i <= 10 ; i++ ){
        cout << n <<"* "<< i <<" = "<< n*i << endl ;
    }
    for (int i = n ; i <= n*10 ; i++){
        if(i % n == 0) cout<< i << endl ;
    }
    for ( int i = n ; i <= n*10 ; i += n ){
        cout<< i << endl ;
    }


    // Print number from num to 1 //
    int num ;
    cout <<"Enter your number : " ;
    cin >> num ;
    for ( int i = num ; i >= 1 ; i-- ){
        cout << i << endl ;
    }


    // Print this AP - 2,5,8,11... upto to x terms //
    int x ;
    cout<<"Enter your number :  " ;
    cin>> x ;
    for ( int i = 2 ; i <= 2+(x-1)*3 ; i += 3){
        cout << i << endl ;
    }
    int x1 ;
    cout<<"Enter your number :  " ;
    cin>> x1 ;
    int a = 2 ;
    for ( int i = 1 ; i <= x1 ; i++ ){
        cout<< a << endl ;
        a += 3 ;
    }


    // Print this GP 1,2,4,8... upto n1 terms //
    int n1 ;
    cout<<"enter your number : " ;
    cin>> n1 ;
    int a1 = 1 ;
    for( int i = 1 ; i <= n1 ; i++ ){
        cout<< a1 << endl ;
        a1 *= 2 ;
    }


    // Print this series 99,95,91,87 upto all positive number //
    int d = 4 ;
    for ( int i = 99 ; i >= 1 ; i -= d ){
        cout<< i << endl ;
    }
    

    // Print all alphabates with their corresponding ascii value //
    for (int i = 65 ; i <= 90 ; i++){
        cout<< (char)i <<" "<< i << endl ;
    }
  

}
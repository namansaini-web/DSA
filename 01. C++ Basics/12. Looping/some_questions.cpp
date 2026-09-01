#include<iostream>
using namespace std ;
int main(){
    // Counts digit of a number //

               // 1 //
    long long n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    int count = 0 ;
    if ( n == 0 ) cout<< count++ ;
    while( n != 0){
        n /= 10 ;
        count++ ; 
        continue ;
    }
    cout<<"number of digit : "<< count << endl ; 

               // 2 //
    string n1 ;
    cout<<"Enter your number : " ;
    cin>> n1 ;
    cout<<"number of digits : "<< n1.length() << endl ;


    // print sum of digits of a number //
    int n2 ;
    cout<<"Enter your number : " ;
    cin>> n2 ;
    if (n2 < 0) { n2 = -n2 ;}
    int sum = 0 ;
    while ( n2 != 0){
        int i = n2 % 10 ;
        sum += i ;
        n2 /= 10 ;
    }
    cout <<"sum of digits : "<< sum << endl ;


    // Reverse of a number (IMPORTANT) //
    int n3 ;
    cout<<"Enter your number : " ;
    cin>> n3 ;
    int rev = 0 ;
    while( n3 != 0 ){
        rev *= 10 ;                      // or //
        rev += (n3 % 10) ;     // { rev = rev*10 + n3%10 } //
        n3 /= 10 ;
    }
    cout<<"reversed number : "<< rev << endl ;


    // Print the sum of a given no. and its reverse //
    int n4 ;
    cout<<"enter your number : " ;
    cin>> n4 ;
    int rev2 = 0 , n5 = n4 ;
    while( n4 != 0 ){
        rev2 *= 10 ;                      
        rev2 += (n4 % 10) ;    
        n4 /= 10 ;
    }
    cout<<"sum of reversed number and the number : "<< rev2 + n5 << endl ;



    // Factorial of a number //
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    long long fact = 1 ;
    int i = 1 ;
    while ( i <= n ){
        fact *= i ;
        i++ ;
    }
    cout<<"Factorial of n : "<< fact << endl ;


    // 'a' raise to power the power 'b' //
    int a,b ;
    cout<<"enter value of base : " ;
    cin>> a ;
    cout<<"enter value of exponent : " ;
    cin>> b ;
    int ans = 1 ;
    for( int i = 1 ; i <= b ; i++){
        ans *= a ;
        if( a == 1 ) break ;
    }
    if( a == 0 && b == 0 ) cout<<"Indeterminate Form!" ;
    else cout<< ans << endl ;
   
}
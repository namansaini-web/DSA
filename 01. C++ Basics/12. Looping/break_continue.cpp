#include<cmath>
#include<iostream>
using namespace std ;
int main(){
    for ( int i = 1 ; i <= 10 ; i++ ){
        if( i == 5 ) break ;
        cout << i << " " ;
    }
    for ( int i = 1 ; i <= 30 ; i++){
        if ( i % 4 == 0 ) continue ;
        cout << i << " " ;
    }
    

    // print all the factor of a given numbers //
    int n1 ;
    cout <<"Enter your number : " ;
    cin>> n1 ;
    for (int i = 1 ; i <= sqrt(n1) ; i++ ){
        if( n1 % i == 0){
            cout<< i << " " ;
            if( i != n1/i ) cout << n1/i << " " ;
        }
    }


    // find whether number is prime or compposite //

                    // 1 //
    int n2 ;
    cout <<"Enter your number : " ;
    cin>> n2 ;
    int factors = 0 ;
    for (int i = 1 ; i <= n2 ; i++ ){
        if( n2 % i == 0){
            factors++ ;
        }
    }
    if( factors == 1 ) cout<<" Neither prime nor composite ! " ;
    else if(factors >= 3 ) cout << " Composite! " ;
    else cout<< " Prime! " ;

                    // 2 //
    int n3 ;
    cout <<"Enter your number : " ;
    cin>> n3 ;
    bool flag = false ;
    for (int i = 2 ; i <= n3-1 ; i++ ){
        if( n3 % i == 0){
            flag == true ;
            break ;
        }
    }
    if ( n3 == 1 ) cout <<"Neither prime nor composite! " ;
    else if ( flag ==true ) cout<< " composite! " ;
    else cout<<" Prime!" ;
                    // 3 //
    int n3 ;
    cout <<"Enter your number : " ;
    cin>> n3 ;
    bool flag = false ;
    for (int i = 1 ; i <= sqrt(n3-1) ; i++ ){
        if( n3 % i == 0){
            flag == true ;
            break ;
        }
    }
    if ( n3 == 1 ) cout <<"Neither prime nor composite! " ;
    else if ( flag == true ) cout<< " composite! " ;
    else cout<<" Prime!" ;                
}

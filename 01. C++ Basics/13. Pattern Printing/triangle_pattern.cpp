#include<iostream>
using namespace std ;
int main(){
    // Star Triangle //
    int n ;
    cout<<"Enter number of rows : " ;
    cin>> n ;
    for( int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< "*" << " " ;
        }
        cout<< endl ;
    }

    // Number Triangle 1 //
    int n1 ;
    cout<<"Enter number of rows : " ;
    cin>> n1 ;
    for( int i=1 ; i<=n1 ; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< j << " " ;
        }
        cout<< endl ;
    }

    // Number Triangle 2 //
    int n2 ;
    cout<<"Enter number of rows : " ;
    cin>> n2 ;
    for( int i=1 ; i<=n2 ; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< i << " " ;
        }
        cout<< endl ;
    }

    // Alphabet Triangle //
    int n3  ;
    cout<<"Enter number of rows : " ;
    cin>> n3 ;
    for( int i=1 ; i<=n3 ; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< (char)(j+64) << " " ;
        }
        cout<< endl ;
    }

    // Alpahbet Triangle 2 //
    int n4 ;
    cout<<"Enter number of rows : " ;
    cin>> n4 ;
    for( int i=1 ; i<=n4 ; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< (char)(i+64) << " " ;
        }
        cout<< endl ;
    }
}
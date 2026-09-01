#include<iostream>
using namespace std ;
int main(){
    int r ,c  ;
    cout<<"Enter number of rows : " ;
    cin>> r ;
    cout<<"Enter number of columns : " ;
    cin>> c ;
    for( int i=1 ; i<=r ; i++){
        for( int j=1 ; j<=c ; j++){
            cout<< (char)(j+64) << " " ;
        }
        cout<< endl ;
    }


    int r1 , c1  ;
    cout<<"Enter number of rows : " ;
    cin>> r1 ;
    cout<<"Enter number of columns : " ;
    cin>> c1 ;
    for( int i=1 ; i<=r1 ; i++){
        for( int j=1 ; j<=c1 ; j++){
            cout<< (char)(i+64) << " " ;
        }
        cout<< endl ;
    }


    int r2 , c2  ;
    cout<<"Enter number of rows : " ;
    cin>> r2 ;
    cout<<"Enter number of columns : " ;
    cin>> c2 ;
    for( int i=1 ; i<= r2 ; i++){
        for( int j=1 ; j<=c2 ; j++){
            if( i%2 == 0 ) cout<< (char)(i+64) << " " ;
            else cout<< (char)(i+96) << " " ;
        }
        cout<< endl ;
    }
}    
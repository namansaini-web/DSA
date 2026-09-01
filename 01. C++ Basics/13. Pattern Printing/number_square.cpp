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
            cout<< j << " " ; 
        }
        cout<<endl ;
    }


    int r1 ,c1  ;
    cout<<"Enter number of rows : " ;
    cin>> r1 ;
    cout<<"Enter number of columns : " ;
    cin>> c1 ;
    for( int i=1 ; i<=r1 ; i++){
        for( int j=1 ; j<=c1 ; j++){
            cout<< i << " " ; 
        }
        cout<<endl ;
    }
}
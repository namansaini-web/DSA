#include<iostream>
using namespace std ;
int main(){
    // Alphanumeric Triangle //
    int n  ;
    cout<<"Enter number of rows : " ;
    cin>> n ;
    for(int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=i ; j++){
            if(i%2==0) cout<< (char)(j+64)<< " " ;
            else cout<< j << " " ;
        }
        cout<<endl ;
    }


    // Horizontally flipped star Triangle //
        // 1 //
    int n1 ;
    cout<<"Enter number of rows : " ;
    cin>> n1 ;
    for(int i=1 ; i<=n1 ; i++){
        for( int j=1 ; j<=n1+1-i ; j++){
            cout<<"*"<< " " ;
        }
        cout<<endl ;
    }
        // 2 //
    int n2 ;
    cout<<"Enter number of rows : " ;
    cin>> n2 ;
    for( int i=n2 ; i>=1; i--){
        for( int j=1 ; j<=i ; j++){
            cout<<"*"<<" " ;
        }
        cout<< endl ;
    }    
        // 3 //
    int n3 ;
    cout<<"Enter number of rows : " ;
    cin>> n3 ;
    int a = n3 ;
    for( int i=1 ; i<=n3; i++){
        for( int j=1 ; j<=a ; j++){
            cout<<"*"<<" " ;
        }
        a-- ;
        cout<< endl ;
    }   

      // Floyd's Triangle //
    int n4 ;
    cout<<"Enter your number of rows  : " ;
    cin>> n4 ;
    int A = 1 ;
    for( int i=1 ; i<=n4; i++){
        for( int j=1 ; j<=i ; j++){
            cout<< A++ <<" " ;
        }
        cout<< endl ;
    }

}    
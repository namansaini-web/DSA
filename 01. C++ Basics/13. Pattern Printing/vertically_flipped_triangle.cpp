#include<iostream>
using namespace std ;
int main(){
    // 1 //
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    for( int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=n ; j++){
            if((i+j) > n) cout<<"* " ;
            else cout<<"  " ;
        }
        cout<< endl ;
    }
    // 2 //
    int N ;
    cout<<"Enter your number : " ;
    cin>> N ;
    for( int i=1 ; i<=N ; i++){
        for( int j=1 ; j<=N-i ; j++){ // (n+1-i) kii jagah (n-i)
            cout<<"  " ;
        }
        for( int j=1 ; j<=i ; j++){
            cout<<"* " ;
        }
        cout<< endl ;
    }


    // Number Triangle vertically flipped //
    int n1 ;
    cout<<"Enter your number : " ;
    cin>> n1 ;
    for( int i=1 ; i<=n1 ; i++){
        for( int j=1 ; j<=n1-i ; j++){
            cout<<"  " ;
        }
        for( int j=1 ; j<=i ; j++){
            cout<< j <<" ";
        }
        cout<< endl ;
    }


    // Alphabte Triangle vertically flipped //
    int n2 ;
    cout<<"Enter your number : " ;
    cin>> n2 ;
    for( int i=1 ; i<=n2 ; i++){
        for( int j=1 ; j<=n2-i ; j++){
            cout<<"  " ;
        }
        for( int j=1 ; j<=i ; j++){
            cout<< (char)(j+64) <<" ";
        }
        cout<< endl ;
    }
}

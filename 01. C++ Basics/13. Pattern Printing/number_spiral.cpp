#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter number of rows : " ;
    cin>> n ;

        // Half number spiral //
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            cout<< min(i,j) <<" "; 
            //if(i<=j)cout<< i <<" ";
            //else cout<< j <<" ";
        }
        cout<< endl ;
    }
    cout<< endl ;

        // Complete number spiral //

    // Method 1 //
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            cout<< min(i,j)<<" " ;
        }
        for(int j=n-1 ; j>=1 ; j--){
            cout<< min(i,j)<<" " ;
        }
        cout<<endl ;
    }
    for(int i=n-1 ; i>=1 ; i--){
        for(int j=1 ; j<=n ; j++){
            cout<< min(i,j)<<" " ;
        }
        for(int j=n-1 ; j>=1 ; j--){
            cout<< min(i,j)<<" " ;
        }
        cout<< endl ;
    }
    cout<< endl ;

    // Methode 2 //
    for(int i=1 ; i<=2*n-1 ; i++){
        for(int j=1 ; j<=2*n-1 ; j++){
            int a=i, b=j ;
            if( i>n ) a = 2*n-i ;        // a+i == 2*n //
            if( j>n ) b = 2*n-j ;        // b+j == 2*n //
            cout<< min(a,b)<<" " ;
        }
        cout<< endl ;
    }
}
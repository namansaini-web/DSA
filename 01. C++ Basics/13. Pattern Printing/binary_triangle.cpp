#include<iostream>
using namespace std ;
int main(){
    // Binary Triangle //
       // 1 // --> where (i+j) is even 
    int n ;
    cout<<"Enter number of rows : " ;
    cin>> n ;
    for(int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=i ; j++){
            if((i+j)%2 == 0) cout<<"1 " ;
            else cout<<"0 " ;
        }
        cout<<endl ;
    }

      // 2 // --> if row no. is even and column no. is odd then print 0
    int n1 ;
    cout<<"Enter number of rows : " ;
    cin>> n1 ;
    for(int i=1 ; i<=n1 ; i++){
        for( int j=1 ; j<=i ; j++){
            if ((i%2 == 0) && (j%2 != 0)) cout<<"0 " ;
            else cout<<"1 " ;
        }
        cout<<endl ;
    }
  
}    
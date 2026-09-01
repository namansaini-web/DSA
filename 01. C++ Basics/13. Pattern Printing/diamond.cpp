#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter your number : " ;
    cin>> n ;

    // Method 1 //
        // Upper pyramid //
    int nsp = n-1 , nst = 1 ;
    for( int i=1 ; i<=n ; i++ ){
        for( int j=1 ; j<=nsp ; j++ ){  // spaces 
            cout<<"  " ;
        }
        for( int j=1 ; j<=nst ; j++ ){    // stars
            cout<<"* " ;
        }
        nsp-- ;
        nst += 2 ;
        cout<< endl ;
    }
        // Lower inverted pyramid //
    nsp = 1 ;
    nst = 2*n-3 ;
    for( int i=1 ; i<=(n-1) ; i++ ){    
        for( int j=1 ; j<=nsp ; j++){
            cout<<"  " ;
        } 
        for( int j=1 ; j<=nst ; j++ ){
            cout<<"* " ;
        }
        nsp++ ;
        nst -= 2 ;
        cout<<endl ;
    }

    // Method 2 //
    
    int nSp = n-1, nSt = 1;
    for(int i=1;i<=(2*n-1) ;i++){
        for(int j=1;j<=nSp;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=nSt;j++){ // stars
            cout<<"* ";
        }
        if(i<n){
            nSp--;
            nSt += 2;
        }
        else{
            nSp++;
            nSt -= 2;
        }
        cout<<endl;
    }
    
      
}
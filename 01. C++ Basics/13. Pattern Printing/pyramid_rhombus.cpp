#include<iostream>
using namespace std ;
int main(){
      // Rhumbus //
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    for( int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=n-i ; j++){ 
            cout<<"  " ;
        }
        for( int j=1 ; j<=n ; j++){
            cout<<"* " ;
        }
        cout<< endl ;
    }


    // (2i-1) Problem //
    int n1 ;
    cout<<"Enter your number : " ;
    cin>> n1 ;
    for( int i=1 ; i<=n1 ; i++){
        for( int j=1 ; j<=2*i-1 ; j++){ 
            cout<<"* " ;
        }
        cout<< endl ;
    }

    // Pyramid //
            // 1 //
    int n2 ;
    cout<<"Enter your number : " ;
    cin>> n2 ;
    for( int i=1 ; i<=n2 ; i++){
        for( int j=1 ; j<=n2-i ; j++){ 
            cout<<"  " ;
        }
        for( int j=1 ; j<=2*i-1 ; j++){ 
            cout<<"* " ;
        }
        cout<< endl ;
    }

            // 2 //
    int nsp = n2-1 , nst = 1 ;
    for(int i=1 ; i<=n2 ; i++){
       for(int j=1 ; j<=nsp ; j++){
        cout<<"  " ;
       }
       for(int j=1 ; j<=nst ; j++){
        cout<<"* " ;
       }
       nsp-- ;
       nst += 2 ;
       cout<< endl ;
    }


    // Inverted Pyramid //
          // 2 //
    int n3 ;
    cout<<"Enter your number : " ;
    cin>> n3 ;
    int nst1 = 2*n3-1 , nsp1 = 1 ;
    for(int i=1 ; i<=n3 ; i++){
       for(int j=1 ; j<=nsp1 ; j++){
        cout<<"  " ;
       }
       for(int j=1 ; j<=nst1 ; j++){
        cout<<"* " ;
       }
       nsp1++ ;
       nst1 -= 2 ;
       cout<< endl ;
    }
    
}    
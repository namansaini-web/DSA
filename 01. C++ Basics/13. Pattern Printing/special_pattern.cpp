#include<iostream>
using namespace std ;
int main(){
      // Hollow star rectangle //
    int R ,C ;
    cout<<"enter number of rows : " ;
    cin >> R ;
    cout<<"enter number of coulmn : " ;
    cin>> C ;
    for (int i=1 ; i<=R ; i++){
        for (int j=1 ; j<=C ; j++){
            if((i==1)||(i==R)||(j==1)||(j==C)) cout<<"*"<<" " ;
            else cout<<" " <<" " ;
        }
        cout<< endl ;
    }


      // Star plus pattern //
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    if ( n%2 != 0 ){
        for(int i=1 ; i<=n ;i++){
            for(int j=1 ; j<=n ; j++){
               if((i==(n/2)+1)||(j==(n/2)+1))
                    cout<<"*"<<" " ;
               else 
                    cout<<" "<<" " ;
            }
            cout<< endl ;
        } 
    } 
    else cout<<"Please enter a odd number! "<< endl ;
    

      // Cross Star pattern //
    int n1 ;
    cout<<"Enter your number : " ;
    cin>> n1 ;
    if ( n1%2 != 0 ){
        for(int i=1 ; i<=n1 ;i++){
            for(int j=1 ; j<=n1 ; j++){
                if( (i == j)||(i+j == n+1) )cout<<"* " ;
                else cout<<"  " ;
            }
            cout<< endl ;
        } 
    }    
    else cout<<"Please enter odd number !" ;
    
}    
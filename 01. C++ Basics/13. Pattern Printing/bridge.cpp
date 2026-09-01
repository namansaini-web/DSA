#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;

    // First row (2n-1) star //
    for(int i=1 ; i<=2*n-1 ; i++){
        cout<<"* " ;
    }
    cout<< endl ;
    
    // ek loop me tin loop // 
    n-- ;
    for (int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n+1-i ; j++){ // Star horizontally flipped triangle //
            cout<<"* " ;
        }
        for(int j=1 ; j<=2*i-1 ; j++){ // Spaces odd triangle //
            cout<<"  " ; 
        }
        for(int j=1 ; j<=n+1-i ; j++){ // Stars flipped triangle //
            cout<<"* " ;
        }
        cout<< endl ;
    }
}
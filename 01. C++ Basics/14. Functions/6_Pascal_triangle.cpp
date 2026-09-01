#include<iostream>
using namespace std ;

int fact(int x){
    int fact = 1 ;
    for(int i=1 ; i<=x ; i++){
        fact *= i ;
    }
    return fact ;
}
int nCr(int n, int r){
    return  fact(n) / (fact(r)*fact(n-r)) ;
}

int main(){
    int n ;
    cout<<"enter value of n : " ;
    cin>> n ;

    for(int i=0 ; i<=n ; i++){
        for(int j=0 ; j<=n-i ; j++){ // Spaces //
            cout<<" " ;
        }
        for(int j=0 ; j<=i ; j++){   // Numbers //
            cout<<nCr(i,j)<<" ";
        }
        cout<< endl ;
    }
}    
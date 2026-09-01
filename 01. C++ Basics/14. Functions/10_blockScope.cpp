#include<iostream>
using namespace std ;
int main(){
    for(int i=1 ; i<=4 ; i++){
        cout<<i<<" " ;
    }
    //cout<<i ;   --> gives error because i is local to for loop,
    //                 so we can't use outside it.
}
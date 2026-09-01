#include<iostream>
using namespace std ;
int x = 10 ;          // Global //

int main(){
    cout<< x <<endl ;
    int x = 80 ;      // Local //
    cout<< x <<endl ;
}
#include<iostream>
using namespace std ;

int x = 7 ;  // GLobal variable //

void fun(){
    x = 23 ;
    cout<< x << endl ;
}
int main(){
    cout<< x <<endl ;
    fun() ;
    cout<< x <<endl ;
}
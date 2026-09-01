#include<iostream>
using namespace std ;

void fun(){
    //cout<< x ;  // error // --> Beacuse it is local to fun()
}
int main(){
    int x=10 ;
    fun() ;
}
#include<iostream>
using namespace std ;

void fun(int n){
    cout<<n<<endl ;
    if(n>20) return ;   // If condition is true return will break the function or
    cout<<n*n<<endl ;   // we can say will return the value  //
}
int product(int a, int b){
    return a*b ;
} 

int main(){
    fun(17) ;
    fun(21) ;

    cout<<product(4,11)<< endl ;   // 1 //

    int x = product(4,11) ;        // 2 //
    cout<< x << endl ;
}
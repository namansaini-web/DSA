#include<iostream>
using namespace std ;

void fun(int age = 20){
    cout<<"My age is : "<< age <<endl ;
}
void power(int base, int exponent = 2){
    int ans = 1 ;
    for(int i=0 ; i<exponent ; i++){
        ans *= base ;
    }
    cout<< ans <<endl ;
}

int main(){
    fun() ;
    // If i don't send a value in fun() function then if will show a error,
    //  to prevent this, we use default variable.

    power(5) ;
    power(5, 3) ;
}
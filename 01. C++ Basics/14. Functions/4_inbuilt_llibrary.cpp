#include<iostream>
#include<cmath>
using namespace std ;

int max(int a, int b){ // How actually max inbuilt function looks like //
    if(a>b) return a ;
    else return b ;
}
int min(int a, int b, int c){
    if(a<=b && a<=c) return a ;
    else if(b<=a && b<=c) return b ;
    else return c ;
}
int main(){
    cout<<max(51,78)<< endl ;         
    cout<<min(12,15,67)<< endl ;

    cout<<pow(2,8)<< endl ;
    cout<<pow(2.6,2.6)<< endl ;
    cout<<pow(0,0)<<endl ; // Indeterminant form //

    cout<<sqrt(49)<<endl ; // return type is 'double' //
    cout<<cbrt(125)<<endl ;
    cout<<abs(-5)<<endl ; // g5ves the absolute value //

    // max of three number using inbuilt number //
    cout<<max(9,max(6,7)) ;

}
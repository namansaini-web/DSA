#include<iostream>
using namespace std ;
int main(){
    int x ;
    cout<<"Enter your number : " ;
    cin>> x ;

    if ((x % 5 == 0) and (x % 3 == 0)) cout<<" Divisible by both " ;
    else if (x % 5 == 0) cout<<" Divisible by 5 only " ;
    else if (x % 3 == 0) cout<<" Divisible by 3 only " ;
    else cout<<" Not divisible by 5 as well as 3 " ;
}
// Capital alphabet or not : //

#include<iostream>
using namespace std ;
int main(){
    char x ;
    cout<<"Enter your character : " ;
    cin>> x ;

    if ( ((char)x >= 65) and ((char)x <= 90) ) cout<<" Its a capital alphabet ! " ;
    else cout<<" Its not a capital alphabet ! " ;
    
}
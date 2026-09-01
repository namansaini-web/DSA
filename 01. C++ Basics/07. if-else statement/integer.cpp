#include<iostream>
using namespace std ;
int main(){
    float num ;
    cout<< "Enter your number : ";
    cin>> num ;
    
    int y = (int)num ;
    if (num == y )cout<<"Number is integer" ;
    else cout<< "Number is not integer" ;
}

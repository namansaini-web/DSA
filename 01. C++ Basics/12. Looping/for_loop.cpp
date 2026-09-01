#include<iostream>
using namespace std ;
int main(){
    for(int i = 1 ; i <= 5 ; i++){
        cout<<"Hello"<<endl ;
    }

    int x ;
    cout<<"Enter your number : " ;
    cin>> x ;
    for(int i = 1 ; i <= x ; i++){
        cout<<"Naman!"<<endl ;
    }

    // Print numbers from 1 to 100 //
    for(int i = 1 ; i <= 100 ; i++){
        cout<< i <<" " ;
    }
    cout<< endl ;
    // Print all even numbers form 1 to 100 //
    for(int i = 0 ; i <= 100 ; i = i+2 ){
        cout<< i << " " ;
    }
    cout<< endl ;
    for( int i = 1 ; i <= 100 ; i++ ){
        if(i%2 == 0) cout<< i << " " ;
    }
    cout<< endl ;

    // HW // 
    // Print all odd numbers from 1 to 100 divisible by 3 //
    for(int i = 0 ; i <= 100 ; i++){
        if((i%2 != 0) && (i%3 == 0 )) cout<< i <<" " ;
    }
    
}
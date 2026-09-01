#include<iostream>
using namespace std ;

void minOfTwo(int a, int b){  // Receive two numbers and give the min of them //
    if(a < b) cout<<a<<" is smaller."<<endl ;
    else cout<<b<<" is smaller."<<endl ;
}

void sumOfThree(int a, int b, int c){
    cout<<"Sum is "<<(a+b+c)<< endl ;
}

void starTriangle(int n){
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<"* "<<" " ;
        }
        cout<< endl ;
    }
}

int main(){
    minOfTwo(99, 100) ;

    sumOfThree(78,67,87) ;

    int a ;
    cout<<"enter a : " ;
    cin>> a ;
    int b ;
    cout<<"enter b : " ;
    cin>> b ;
    int c ;
    cout<<"enter c : " ;
    cin>> c ;
    starTriangle(a) ;
    starTriangle(b) ;
    starTriangle(c) ;
}
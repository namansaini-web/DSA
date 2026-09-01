#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter your number : " ;
    cin>> n ;
    if(n%2 == 0) cout<<"even!"<<endl ;
    else cout<<"odd!"<<endl ;

//1.   Ternary Operator Format //
       //  condition ? sach : jhoot  // 
    (n%2 == 0) ? cout<<"even!"<<endl : cout<<"odd!"<<endl ;

//2.   Ternary Operator Format //
      //   cout<<( (condition) ? "sach" : "jhoot" ) ;  //
    cout<<((n%2 == 0) ? "even!" : "odd!" ) ;


    

}
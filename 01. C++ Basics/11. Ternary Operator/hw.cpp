#include<iostream>
using namespace std ;
int main(){
    // HW //

    float n1 ;
    cout<<"Enter value of n1 : " ;
    cin>> n1 ;
    float n2 ;
    cout<<"Enter value of n2 : " ;
    cin>> n2 ;
    float n3 ;
    cout<<"Enter value of n3 : " ;
    cin>> n3 ; 
    
    cout<<(((n1 >= n2) && (n2 >= n3)) ? "n1 is greatest!" : (((n2 >= n1) && (n1 >= n3)) ? "n2 is greatest!" : "n3 is greatest!"))<<endl ;
       //   or   //
    ((n1 >= n2) && (n2 >= n3)) ? cout<<"n1 is greatest!"<<endl : (((n2 >= n1) && (n1 >= n3)) ? cout<<"n2 is greatest!"<<endl : cout<<"n3 is greatest!"<<endl ) ;
}
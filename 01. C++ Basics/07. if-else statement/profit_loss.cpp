#include<iostream>
using namespace std ;
int main(){ 
    int cp ;
    cout<<"Enter your cost price : " ;
    cin>> cp ;
    int sp ;
    cout<<"Enter your selling price : " ;
    cin>> sp ;

    if ( sp == cp ) cout<<" No Profit " ;
    else {if ( sp > cp ) cout<<" Profit is "<< sp-cp  ; else cout<<" loss is "<< cp-sp ;} 


    
    // if ( sp == cp ) cout<<" No Profit " ;           //
    // if ( sp > cp ) cout<<" Porfit is "<< sp-cp ;    //
    // if ( sp < cp ) cout<<" Loss is "<< cp-sp ;      //
}

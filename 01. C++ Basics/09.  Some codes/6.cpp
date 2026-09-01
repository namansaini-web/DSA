// fing wheather point lies in which quadrant //

#include<iostream>
using namespace std ;
int main(){
    float x ;
    cout<<"enter x coordinate : " ;
    cin>> x ;
    float y ;
    cout<<"enter y coordinate : " ;
    cin>> y ;

    if ((x>0) and (y==0))
        cout<<" Lies on x-axis " ;
    else if ((y>0) and (x==0)) 
        cout<<" Lies on y-axis " ;
    else if ((x>0) and (y>0))
        cout<<" I Quadrant !" ;
    else if ((x<0) and (y>0))
        cout<<" II Quadrant !" ;
    else if ((x<0) and (y<0))
        cout<<" III Quadrant !" ;
    else if ((x>0) and (y<0))
        cout<<" IV Quadrant !" ;
    else 
        cout<<"It's Origin!" ;
}
#include<iostream>
using namespace std ;

// Different functions with same function. //

// case I: //
void top(){
    cout<<"Hi!"<<endl ;
}
void top(int x){
    cout<<"Hello!"<<endl ;
}
void top(int x, int y){
    cout<<"Kese ho!"<<endl ;
}
//void fun(int x = 7){
//    cout<<"HI!"<<endl ;  // Show candidte error because of first fun function,
//                              and fun() call statment.
//}


// If datatype of variable is different then it will not give error //


// CASE II: //
void down(char x){
    cout<<"Helooo!"<<endl ;
}
void down(double x){
    cout<<"Kase hoo!"<<endl ;
}


// CASE III: //
void fun(int x, float y){
    cout<<"Naman"<<endl ;
}
void fun(float y, int x){
    cout<<"Saini"<<endl ;
}


int main(){
    top() ;
    top(7) ;
    top(7,8) ;

    // CASE II: //
    

    // CASE III: //
    fun(3,3.14) ;
}
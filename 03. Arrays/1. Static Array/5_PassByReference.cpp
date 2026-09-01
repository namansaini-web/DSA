#include<iostream>
using namespace std;

//  void change(int x){
//      x = 20 ;
//  }                             // It will give 6 as output as, x in main function remains 6 //
//  int main(){
//    int x = 6 ;
//    change(x) ;
//    cout<< x <<endl ;
//  }

void change(int x[]){
    x[0] = 20 ;
}                                 // It will give 20 as output as, no new array is creating, perivous array gets modified //
void Change(int y[]){
    y[0] = 25 ;
}                                 // It will give 25 as output as, no new array is creating, perivous array gets modified //
int main(){
    int x[] = {6,2,4,8} ;
    change(x) ;
    cout<< x[0] <<endl ;
    Change(x) ;
    cout<< x[0] <<endl ;
}
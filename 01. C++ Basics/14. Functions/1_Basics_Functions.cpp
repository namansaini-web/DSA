#include<iostream>
using namespace std ;
void fun(){
    cout<<"You are a Good Boy!"<< endl ;
}
void naman(){
    cout<<"Naman!"<< endl ;
}
void kunal(){
    naman() ;
    cout<<"Kunal!"<< endl ;
}
void kavita(){
    cout<<"Kavita!"<< endl ;
    kunal() ;
}
void Naresh(){
    cout<<"Naresh!"<< endl ;
    kavita() ;
}

int main(){
    fun() ;
    cout<<"Hi Naman!"<< endl ;
    fun() ;  // Calling the fun() function //

    Naresh() ;
}

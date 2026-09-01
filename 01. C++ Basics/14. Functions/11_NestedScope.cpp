#include<iostream>
using namespace std ;
int main(){
    int x = 6 ;
    {
        int x = 8 ;
    }
    cout<< x <<endl ;

    int y = 6 ;
    {
        y = 8 ;
    }
    cout<< y <<endl ;
}
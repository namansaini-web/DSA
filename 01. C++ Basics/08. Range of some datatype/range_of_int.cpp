#include<iostream>
#include<climits>  // this header file is used to determine maximum and minimum value of int //
using namespace std ;
int main(){
    int x = INT_MAX ;
    cout<< x <<endl;

    int y = 2147483649;  // Out of range number //
    cout<< y <<endl;

    int z = INT_MIN ;
    cout<< z << endl ;
}
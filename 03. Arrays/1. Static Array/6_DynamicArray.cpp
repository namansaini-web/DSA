#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>> n ;

    // 1 --> Static allocation //
    int arr[n] ;

    // 2 --> Dynamic allocation //
    int* brr = new int[n]();
    brr[0] = 4 ;
    for(int i=0 ; i<n ; i++){
        cout<< brr[i] <<" " ;
    }
}
#include<iostream>
using namespace std;
int main(){
    int arr[] = {76,76,86,1,38,93,95,77,34};
    int n = sizeof(arr)/4 ;

    cout << arr <<endl ;
    cout << &arr[0] <<endl ;
    cout << &arr[1] <<endl ;
    cout << &arr[2] <<endl ;

    // Every single element in an array takes 4 bits ,
    //    and there address is 4 bits away from each other //

}
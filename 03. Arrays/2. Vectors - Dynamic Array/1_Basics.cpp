#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> arr(5, 1) ;  // index 0 to 4 //
    for(int i=0 ; i<arr.size() ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl ;

    // Adding an element at end of an array //
    arr.push_back(5);
    arr.push_back(15);
    for(int i=0 ; i<arr.size() ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl ;

    // Removing an element from the end of an array //
    arr.pop_back();
    for(int i=0 ; i<arr.size() ; i++){
        cout<< arr[i] <<" ";
    }
     
}
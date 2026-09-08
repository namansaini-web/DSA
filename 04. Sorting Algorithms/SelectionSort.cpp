#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" " ;
    }
}
int main(){
    vector<int> arr = {7,4,9,1,3,6,2,5} ;
    int n = arr.size() ;
    for(int j=0 ; j<n-1 ; j++){
        int mn = arr[j], mnIdx = j ;
        for(int i=0 ; i<n ; i++){
            if(arr[i] < mn){
                mn = arr[i] ;
                mnIdx = i ;
            }
        } 
        swap(arr[0], arr[mnIdx]) ;
    }
    print(arr) ;
    cout<<endl ;


    // TC = O(n^2) --> avg //


    // Sort an array such that the largest gets in the right place //
    vector<int> Arr = {3,1,2,5,4,0} ;
    int N = Arr.size() ;
    for(int j=0 ; j<N-1 ; j++){
        int mn = Arr[j], mnIdx = j ;
        for(int i=0 ; i<N ; i++){
            if(Arr[i] > mn){
                mn = Arr[i] ;
                mnIdx = i ;
            }
        }
        swap(Arr[n-1], Arr[mnIdx]) ; 
    }
    print(arr) ;
}
#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" " ;
    }
}
int main(){
    int k ; 
    cout<<"Enter value of k : " ;
    cin>> k ;
    vector<int> arr = {93,17,4,64,46,18,3,61} ;
    int n = arr.size() ;
    for(int j=0 ; j<k ; j++){
        int mn = arr[j], mnIdx = j ;
        for(int i=j ; i<n ; i++){
            if(arr[i] < mn){
                mn = arr[i] ;
                mnIdx = i ;
            }
        }
        swap(arr[j], arr[mnIdx]) ;
    }
    print(arr) ;

    // TC = O(n*k) --> good // 
}
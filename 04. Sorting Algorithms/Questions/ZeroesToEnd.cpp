#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" " ;
    }
}
int main(){
    vector<int> arr = {9,-2,0,0,-4,6,0,7,0} ;
    int n = arr.size() ;
    for(int j=0 ; j<n-1 ; j++){
        int swaps = 0 ;
        for(int i=0 ; i<n-1-j ; i++){
            if(arr[i] == 0){
                swap(arr[i], arr[i+1]) ;
                swaps++ ;
            }
        }
    if(swaps == 0) break ;
    }
    print(arr) ;
    
}
// Wave Array // --> Swap adjesent element in a sorted array.

#include<iostream>
#include<vector>
using namespace std ;

void print(vector<int>& arr){
    for(int ele : arr) cout<<ele <<" ";
    cout<<endl ;
}
int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9} ;
    for(int i=0 ; i<arr.size() ; i+=2){
        if(i == arr.size()-1)continue ; 
        swap(arr[i],arr[i+1]);
    }
    print(arr);
}

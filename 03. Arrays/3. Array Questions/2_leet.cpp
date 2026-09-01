// Rotate Array // --> LeetCode 189
// Given an integer array nums, rotates the array to the right by k steps, where k>=0.

#include<iostream>
#include<vector>
using namespace std ;

void reverse(vector<int>& arr , int i, int j){
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void rotate(vector<int>& arr, int  k){
    int n = arr.size();
    k = k % n ;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k ;
    cout<<"Enter value of k : " ;
    cin>> k ;
    rotate(arr, k) ;

    for(int x : arr){
        cout << x << " ";
    }
}
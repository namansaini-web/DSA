// Segregate '0' and '1' from an array // 

#include<iostream>
#include<vector>
using namespace std ;

void print(vector<int>& arr){
    for(int ele : arr) cout<<ele <<" ";
    cout<<endl ;
}
int main(){
    vector<int> arr = {1,0,1,0,1,0,0};

    // 1 // --> swap method
    int i = 0, j = arr.size()-1 ;
    while(i<j){
        if(arr[i] == 0) i++;
        else if(arr[j] == 1) j--;
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }   
    print(arr);


    // 2 // --> element change methode
    int ones = 0, zeroes = 0;
    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i] == 1) ones += 1 ;
        else zeroes += 1 ;
    }
    cout<< ones <<" "<< zeroes <<endl;
    for(int i=0 ; i<zeroes ; i++){
        arr[i] = 0 ;
    }
    for(int i=zeroes ; i<arr.size() ; i++){
        arr[i] = 1 ;
    }
    print(arr);
}
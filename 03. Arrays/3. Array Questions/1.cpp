// Reverse the array //

#include<iostream>
#include<vector>
using namespace std ;

void print(vector<int>& arr){
    for(int ele : arr) cout<<ele <<" ";
    cout<<endl ;
}
int main(){
    vector<int> arr = {10,20,30,40,50,60,70};
    print(arr);

    // 1 //
    int e ;
    vector<int> brr{};
    while(!arr.empty()){
        e = arr.back();
        arr.pop_back();
        brr.push_back(e);
    }
    for(int i=0 ; i<brr.size() ; i++){
        cout<< brr[i] <<" ";
    }
    cout<<endl;

    // 2 // --> will not print beacuse arr becomes completely empty after 1st method.
        // Two Pointers Approach //
    int i = 0, j = arr.size()-1 ;
    while(i<j){
        // swap(arr[i], arr[j]);  --> builtin method.
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    print(arr);

}
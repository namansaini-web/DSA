#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int m,n ;
    cout<<"Enter value of rows : " ;
    cin>> m ;
    cout<<"Enter value of columns : " ; 
    cin>> n ;
     
    // Forming an empty vector with garbage values //
    vector<vector<int>> arr(m, vector<int>(n,0));

    // Adding some other colums/rows //
    arr.push_back(vector<int>(4, -1));

    // Output //
    for(int i=0 ; i<arr.size() ; i++){
        for(int j=0 ; j<arr[i].size() ; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl ;
    }
}
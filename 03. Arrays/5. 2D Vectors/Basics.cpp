#include<iostream>
#include<vector>
using namespace std ;
int main(){
    // Normal Vector //
    vector<int> V1 = {3,7,2,8,9};
    vector<int> V2 = {9,2,9};
    vector<int> V3 = {4,4,4,4};
    vector<int> V4 = {10};

    // 2D Vector // --> Jagged Array
    vector<vector<int>> V = {V1,V2,V3,V4};
    for(int i=0 ; i<V.size() ; i++){
        for(int j=0 ; j<V[i].size() ; j++){
            cout<< V[i][j] <<" ";
        }
    }
}
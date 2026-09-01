#include<iostream>
#include<vector>
using namespace std ;
int main(){
    // For order 3x3 //
    vector<vector<int>> a = {{4,7,1},{9,2,6},{3,8,5}};
    vector<vector<int>> b = {{5,1,9},{2,7,4},{8,3,6}};

    int n = a.size();    // --> TC = O(n^3)
    vector<vector<int>> res(n,vector<int>(n,0));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<< res[i][j] <<" ";
        }
        cout<<endl ;
    }
     
    cout<<endl ;

    // For mxn and pxq order matrices //
    vector<vector<int>> A = {{1,2},{3,4},{5,6}};
    vector<vector<int>> B = {{1,2,3,4},{5,6,7,8}};
    int rowsA = A.size();
    int colsA = A[0].size();
    int rowsB = B.size();
    int colsB = B[0].size();

    vector<vector<int>> prod(rowsA,vector<int>(colsB,0));
    for(int i=0 ; i<rowsA ; i++){
        for(int j=0 ; j<colsB ; j++){
            for(int k=0 ; k<colsA-1 ; k++){
                prod[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0 ; i<rowsA ; i++){
        for(int j=0 ; j<colsB ; j++){
            cout<< prod[i][j] <<" ";
        }
        cout<<endl ;
    }

}
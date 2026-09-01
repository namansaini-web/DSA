#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<vector<int>> v = {{2,3,4},{5,6,7}} ;
    // Output : {{2,5},{3,6},{4,7}}

    int m = v.size(), n = v[0].size() ;
    vector<vector<int>> transpose(n, vector<int>(m)) ;

     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
             transpose[j][i] = v[i][j] ;
        }
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<transpose[i][j]<<" " ;
        }
        cout<<endl; 
    }

}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    vector<int> v = {4,5,7,6,3,1};

    // 1. sort //
    sort(v.begin(), v.end());
    for(int ele : v) cout<< ele <<" ";
    cout<<endl;

    // 2. reverse //
    reverse(v.begin(), v.end());
    for(int e : v) cout<< e <<" ";
    cout<<endl ;
}
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> v = {4,3,5,6,8,2};
    for(int i=0 ; i<v.size() ; i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;

    // For Each Loop //
    for(int ele : v){  
        cout<< ele <<" ";
    }
    cout<<endl;

    // Multiple even number by 2 and square the odd numbers //
    // 1 // --> With foreachloop --> Which will not work
    for(int e : v){
        if(e%2 == 0) e *= 2;
        else e *= e ;
    }
    for(int e : v) cout<< e <<" ";
    cout<<endl;
    // 2 // --> Normal method 
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]%2 == 0) v[i] *= 2 ;
        else v[i] *= v[i] ;
    }
    for(int i=0 ; i<v.size() ; i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;

}
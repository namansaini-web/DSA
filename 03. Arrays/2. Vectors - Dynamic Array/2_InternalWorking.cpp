#include<iostream>
#include<vector>
using namespace std ;
int main(){
    // 1 //
    vector<int> v;
    v.push_back(5);
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.push_back(9);
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.push_back(0);
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.push_back(2);
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.push_back(8);
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.pop_back();
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.pop_back();
    cout<< v.size() <<" "<< v.capacity() <<endl ;
    v.push_back(1);
    cout<< v.size() <<" "<< v.capacity() <<endl ;

    for(int i=0 ; i<v.size() ; i++){
        cout<< v[i] <<" ";
    }
    cout<<endl ;


    // 2 //
    vector<int> V(7);    // 7 is not capacity, its size of that vector --> With zero's as element //  
    for(int i=0 ; i<V.size() ; i++){
        cout<< V[i] <<" ";
    }
    cout<<endl ;

    V.push_back(6); // Adds 6 after 6 zero's in that vector //
    cout<< V[7] <<endl;
    V.pop_back();
    for(int i=0 ; i<V.size() ; i++){
        cout<< V[i] <<" ";
    }
    cout<<endl ;

    cout<< V.size() <<" "<< V.capacity() <<endl ;


    // 3 //  
    vector<int> vec = {4,5,7,9,1};
    cout<< vec.capacity();

}
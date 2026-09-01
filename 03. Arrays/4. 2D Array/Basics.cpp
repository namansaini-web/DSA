#include<iostream>
using namespace std;
int main(){
    // SYNTAX : //
    // int arr[3][4];
    int arr[][4] = {{5,6,4,3},{3,5,8,0},{7,1,2,5}};

    // Printing Elements of that Array : //
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
    for(int j=0 ; j<4 ; j++){
        for(int i=0 ; i<3 ; i++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }

}
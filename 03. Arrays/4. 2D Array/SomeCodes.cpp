#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{5,1,4,3},{3,5,8,0},{4,1,2,3}};

    // Sum of elements in given Matrix //
    int sum = 0;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of elements : "<< sum <<endl;

    // Find the row with maximum sum // 
    int maxsum = INT32_MIN;
    int maxRow = -1;
    for(int i=0 ; i<3 ; i++){
        int sum = 0;
        for(int j=0 ; j<4 ; j++){
            sum += arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            maxRow = i;
        }
    }
    cout<< maxRow <<" "<< maxsum <<endl;

    // find the minimum element out of all the maximum elements of each row //
    int ans = arr[0][0];
    for(int i=0 ; i<3 ; i++){
        int max_ele = arr[i][0] ;
        for(int j=0 ; j<4 ; j++){
            if(max_ele < arr[i][j]) max_ele = arr[i][j] ;
        }
        if(max_ele < ans) ans = max_ele ;
    }
    cout<<"Minimum element out of the maximum element of each row is : "<< ans <<endl;

    // find the maximum element out of all the minimum elements of each row //
    int Ans ;
    for(int i=0 ; i<3 ; i++){
        int min_ele = arr[i][0] ;
        for(int j=0 ; j<4 ; j++){
            if(min_ele > arr[i][j]) min_ele = arr[i][j] ;
        }
        if(i==0 || min_ele > Ans) Ans = min_ele ;  // For the first row, just store its minimum because there is nothing to compare with yet //
    }
    cout<<"Maximum element out of the minimum element of each row is : "<< Ans <<endl;
}
#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {179, 124, 120, 99, 87, 79, 44, 22, 8} ;
    int n = arr.size() ;

    int tar = 179 ;
    int low = 0, high = n-1 ;
    int result = -1 ;

    while(low <= high){
        int mid = low + (high-low) / 2 ;
        if(arr[mid] > tar){
            low = mid + 1 ;
        }
        else if(arr[mid] < tar){
            high = mid - 1 ;
        }
        else{
            result = mid ;
            break ;
        }
    }

    if(result != -1){
        cout << "Element Found at index : " << result << endl ;
    }
    else{
        cout << "Element not found !" << endl ;
    }
    return -1 ;
}
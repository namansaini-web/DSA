// Vector/array with repeated elements and we have to find the first occurance of target element.

#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {-4, -3, -3, 1, 1, 1, 1, 2, 4, 4, 8, 9} ;
    int n = arr.size() ;
    vector<int> ans(2, -1) ;
    int tar = 1 ;

    // First Occurance //
    int low = 0, high = n-1 ;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        
        if (arr[mid] > tar) {
            high = mid - 1;
        } 
        else if (arr[mid] < tar) {
            low = mid + 1;
        } 
        else { 
            ans[0] = mid; 
            high = mid - 1 ;     
        }
    }

    // Last Occurance :
    low = 0 ;
    high = n-1 ;
       while (low <= high) {
        int mid = low + (high - low) / 2; 
        
        if (arr[mid] > tar) {
            high = mid - 1;
        } 
        else if (arr[mid] < tar) {
            low = mid + 1;
        } 
        else { 
            ans[1] = mid; 
            low = mid + 1 ;     
        }
   }

    cout << "First and last Occurance will be : "
        << ans[0] << ", " << ans[1] << endl;
}
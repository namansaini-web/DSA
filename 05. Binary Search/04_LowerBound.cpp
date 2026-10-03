// Lower bound : If the target exists in the array, it will give the first occurrence of that element.
//               Otherwise, it will give the smallest among those which is greater than the target. 

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,7,9,10};
    int n = arr.size();
    int tar = 8;
    int low = 0, high = n - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] < tar) low = mid + 1;
        else{   // arr[mid] >= tar //
            low = mid;
            high = mid - 1;
        }
    }

    cout << low << endl ;


    // built-in : 
    auto lb = lower_bound(arr.begin(), arr.end(), tar);
    cout << *lb ;
}
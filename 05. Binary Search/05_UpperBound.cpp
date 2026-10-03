// Upper Bound : It will always give the smallest element among those which is greater than the target. 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,7,9,10};
    int n = arr.size();
    int tar = 8;
    int low = 0, high = n - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if (arr[mid] > tar) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << ans << endl;

    // built-in : 
    auto it = upper_bound(arr.begin(), arr.end(), tar);
    cout << *it ;
}
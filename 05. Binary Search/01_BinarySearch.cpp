#include <iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr = {2, 3, 4, 10, 40, 55, 68, 72, 90};
   int tar = 10;
    
   int n = arr.size();
   int low = 0, high = n - 1;
   int result = -1;

   while (low <= high) {
      int mid = low + (high - low) / 2; 
        
      if (arr[mid] > tar) {
         high = mid - 1;
      } 
      else if (arr[mid] < tar) {
         low = mid + 1;
      } 
      else {
         result = mid; 
         break;       
      }
   }

   if (result != -1) {
      cout << "Element " << tar << " is present at index " << result << endl;
   } 
   else {
      cout << "Element " << tar << " is not present in the array" << endl;
   }
    
   return 0;

   // TC = O(logn)
}
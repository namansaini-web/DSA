#include<iostream>
#include<vector>
using namespace std ;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" " ;
    }
}
int main(){  
    // Bubble Sort in Ascending order //
    vector<int> arr = {5,4,3,6,2,1} ;
    int n = arr.size() ;
    print(arr) ;
    int totalswaps = 0 ;
    for(int j=0 ; j<n-1 ; j++){
        int swaps = 0 ;
        for(int i=0 ; i<n-1-j ; i++){    // (n-1-j) because of better time complexity, as no. of iterations decreases //
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]) ;
            swaps++ ;
            totalswaps++ ;
        }
    if(swaps == 0) break ;  // Optimization
    }
    cout<<endl ;
    print(arr) ;
    cout<< totalswaps <<endl ; 

    // TC = O(n) --> best  // 
    // TC = O(n^2) --> avg //
    // No. of maximum swaps in bubble sort is [n(n-1)/2] //


    // Bubble Sorting in descending order //
    vector<int> ARR = {2,1,4,3,5} ;
    int num = ARR.size() ;
    for(int j=0 ; j<num-1 ; j++){
        for(int i=0 ; i<num-1-j ; i++){
            if(ARR[i+1] > ARR[i]){
                swap(ARR[i+1], ARR[i]) ;
            }
        }
    }
    print(ARR) ;
    cout<<endl ;


    // Bubble Sort: smallest element comes to the left after each pass
    vector<int> Arr = {2,1,4,3,5};
    int N = Arr.size();
    for (int j=0; j<N-1; j++) {
        for (int i=N-2; i>=j; i--) {
            if (Arr[i] > Arr[i+1]) {
                swap(Arr[i], Arr[i+1]);
            }
        }
    }
    print(Arr) ;

}
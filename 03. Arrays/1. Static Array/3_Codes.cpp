#include<iostream>
using namespace std;
int main(){
    int arr[] = {76,76,86,1,38,93,95,77,34};


    // For sum of elements an array //
    int sum = 0 ;
    int n = sizeof(arr)/4 ;
    for(int i=0 ; i<=n-1 ; i++){
        sum += arr[i] ;
    }
    cout<<"Sum of elements of array : "<< sum <<endl ; 

    
    // For product of elements an array // --> HW
    int Prod = 1 ;
    for(int i=0 ; i<=n-1 ; i++){
        Prod *= arr[i] ;
    }
    cout<<"Product of elements of array : "<< Prod <<endl ;


    // Finding maximum element in array //
        // 1 //
    int max_ele = arr[0]; 
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i] > max_ele) 
            max_ele = arr[i] ;
    }
    cout<<"Maximum element of array : "<< max_ele <<endl ; 
        // 2 //
    int Max_ele = arr[0]; 
    for(int i=0 ; i<=n-1 ; i++){
       Max_ele = max(Max_ele, arr[i]) ;
    }
    cout<<"Maximum element of array : "<< Max_ele <<endl ; 


    // Finding minimum element in array //
        // 1 //
    int min_ele = arr[0]; 
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i] < min_ele) 
            min_ele = arr[i] ;
    }
    cout<<"Minimum element of array : "<< min_ele <<endl ; 
        // 2 //
    int Min_ele = arr[0]; 
    for(int i=0 ; i<=n-1 ; i++){
        Min_ele = min(Min_ele, arr[i]) ;
    }
    cout<<"Minimum element of array : "<< Min_ele <<endl ; 


    // Searching wheather the element is present in that array //
    int target ;
    cout<<"Enter your integer : " ;
    cin>> target ;
    bool flag = false ;          // Not present //
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i] == target){
            flag = true ;        // Element present //
            break ;
        }
    }
    if(flag == true) cout<< target <<" is present in array." <<endl;
    else cout<< target <<" is not is array." <<endl;


    // Printing the second Maximum element in the array //
        // 1 //
    int max_1st = INT32_MIN;                          // INT32_MIN --> range of 'int' //
    for(int i=0 ; i<n ; i++){
        if(arr[i] > max_1st) max_1st = arr[i] ;
    }
    int max_2nd = INT32_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i] > max_2nd && arr[i] != max_1st) max_2nd = arr[i] ;
    }
    cout<<"Second maximum number : "<< max_2nd <<endl;
        // 2 // 
    int max_1st = INT32_MIN;                          // INT32_MIN --> range of 'int' //
    for(int i=0 ; i<n ; i++){
        if(arr[i] > max_1st) max_1st = arr[i] ;
    }
    int max_2nd = INT32_MIN;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == max_1st) continue;
        if(arr[i] > max_2nd) max_2nd = arr[i] ;
    }
    cout<<"Second maximum number : "<< max_2nd <<endl;
    
}
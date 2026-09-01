#include<iostream>
#include<iterator>
using namespace std;
int main(){
    // Declaration: type name[size];
    int arr[5];  // Array of 5 integers
    
    // Initialization: you can assign values
    int arr2[5] = {10, 20, 30, 40, 50};  // Size is 5
    int arr3[] = {10, 20, 30};  // Size is inferred (3)
    
    // Access elements using index (0-based)
    cout << arr2[0];  // Prints 10
    cout << arr2[4];  // Prints 50
    
    // Iterate through array
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";  // 10 20 30 40 50
    }



    // Methode 1 to write an array:
    int marks[] = {74, 85, 89 ,96, 68}; // Array of integers // 

    cout<< marks <<endl ; // Gives address // 
    cout<< marks[0] <<endl ;  
    cout<< marks[4] <<endl ;

    // Finding number of elements in array // 
    //cout<< size(marks) <<endl ; --> error due to old version

    // Update //
    marks[4] = 23;                 
    cout<< marks[4] <<endl ;

    // Input //
    cin>> marks[2];               
    cout<< marks[2] <<endl ; 

    float arr[] = {3.14, 2,18, 9.8};   // Array of float values //

    cout<< sizeof(arr)/4 <<endl ;

    
    // Methode 2 to write an array:
    int size = 10, b[size];

}
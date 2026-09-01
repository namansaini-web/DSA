// Merge 2 sorted array, and form another sorted array // 

#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4, n = sizeof(b)/4 ;
    int c[m+n];

    // 1 //
    int i=0, j=0, k=0 ;
    while(i<m && j<n){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
    while(j<n)
        c[k++] = b[j++];
    while(i<m)
        c[k++] = a[i++];

    for(int i=0 ; i<m+n ; i++){
        cout<< c[i] <<" ";
    }

    // 2 // --> HW
    int i=m-1, j=n-1, k=m+n-1 ;
    while(i>=0 && j>=0){
        if(a[i] > b[j]){
            c[k--] = a[i--];
        }
        else{
            c[k--] = b[j--];
        }
    }
    while(j>=0)
        c[k--] = b[j--];
    while(i>=0)
        c[k--] = a[i--];
    
    for(int i=0 ; i<m+n ; i++){
        cout<< c[i] <<" ";
    }
}
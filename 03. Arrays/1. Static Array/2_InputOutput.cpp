#include<iostream>
#include<iterator>
using namespace std;
int main(){
    int arr[] = {45, 67, 87, 98, 34, 28};

    // Printing all elements of an arrays --> OUTPUT //

    int N = sizeof(arr)/4 ;  // --> divide by 4 beacuse of size of 'int' //
    for(int i=0 ; i<=N-1 ; i++){
        cout<< arr[i] <<" " ;
    }
    cout<<endl ;

    int a[4] ;             // Empyt array //
    cout<< a[0] <<endl ;   // Garbage values //

    // Taking elements in an array --> INPUT //
    int n ;
    cout<<"Enter Array size : ";
    cin>> n ;
    int array[n] ;
    cout<<"Enter array Elements : ";
    for(int i=0 ; i<=n-1 ; i++){
        cin>> array[i] ;
    }
    for(int i=0 ; i<=n-1 ; i++){
        cout<< array[i] <<" " ;
    }
    cout<<endl ;

    // Printing all negative elements of an array //
    for(int i=0 ; i<=n-1 ; i++){
        if(array[i] < 0) cout<< array[i] <<" " ;
    }
    cout<<endl ;

    // EMPTY ARRAY // --> gives 0 as element of array.
    int num ;
    cout<<"Enter lenth of array : " ;
    cin>> num ;
    int Array[num] = {} ;
    for(int i=0 ; i<=num-1 ; i++){
        cout<< Array[i] <<" " ;
    }
}
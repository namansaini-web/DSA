#include<iostream>
using namespace std;
int main(){
    // TC for nested loops:

    int n;
    cout<<"Enter value of n : ";
    cin>> n ;
    int m;
    cout<<"Enter value of m : ";
    cin>> m ;

    // Case 1: Rectangle
    for(int i=1 ; i<=n ; i++){            // TC = O(m*n)
        for(int j=1 ; j<=m ; j++){
            cout<<"Naman"<<" ";
        }
        cout<<endl ;
    }

    // Case 2: Square
    for(int i=1 ; i<=n ; i++){            // TC = O(n*n)
        for(int j=1 ; j<=n ; j++){
            cout<<"Naman"<<" ";
        }
        cout<<endl ;
    }

    // Case 3: Triangle
    for(int i=1 ; i<=n ; i++){            // TC = O((n*n)/2) = O(n*n) --> Half iteration then in a square.
        for(int j=1 ; j<=i ; j++){
            cout<<"Naman"<<" ";
        }
        cout<<endl ;
    }

    // Case 4: H/W
    for(int i=1 ; i<=n ; i++){            // TC = O((n*n)+n) = O(n*n)
        for(int j=i+1 ; j<=n ; j++){
            cout<<"Naman"<<" ";
        }
        cout<<endl ;
    }

}
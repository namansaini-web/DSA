#include<iostream>
using namespace std;
int main(){
    // TC for normal loops:

    int n;
    cout<<"Enter value of n : ";
    cin>> n ;
    int m;
    cout<<"Enter value of m : ";
    cin>> m ;
    
    // Case 1:
    for(int  i=1 ; i<=n; i++){       // TC = O(n)
        cout<<("Naman")<<endl ;
    }

    // Case 2:
    for(int  i=1 ; i<=n; i+=2){      // TC = O(n/2) = O(n)
        cout<<("Naman")<<endl ;
    }

    // Case 3:
    for(int  i=1 ; i<=n*2; i++){     // TC = O(n*2) = O(n)  
        cout<<("Naman")<<endl ;
    }

    // Case 4:
    for(int  i=1 ; i<=n-7; i++){     // TC = O(n+k) = O(n)
        cout<<("Naman")<<endl ;
    }

    // Case 5:
    for(int  i=1 ; i<=n; i++){        // TC = o(n) --> But 2*n lines will be printed
        cout<<("Naman / n")<<endl ;
        cout<<("Saini / n")<<endl ;
    }

    // Case 6:
    for(int  i=1 ; i<=10; i++){        // TC = O(k) = O(1)
        cout<<("Naman")<<endl ;
    }

    // Case 7:
    for(int  i=1 ; i<=n; i++){         // TC = O(n+m) = O(max{m,n})
        cout<<("Naman")<<endl ;
    }
    for(int  i=1 ; i<=m; i++){
        cout<<("Saini")<<endl ;
    }

    // Case 8:
    for(int i=1 ; i*i<=n ; i++){            // TC = O(n^(1/2))
        cout<<("Naman")<<endl ;          // i^2 <= n ,  i <= n^(1/2)
    }

}
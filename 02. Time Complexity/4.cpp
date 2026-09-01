#include<iostream>
using namespace std;
int main(){
    // Break and Continue Cases:

    int n;
    cout<<"Enter value of n : ";
    cin>> n ;

    // case 1:                            // TC = O(n)
    for(int i=0 ; i<n ; i++){             
      for(int j=0 ; j<n ; j++){         
          cout<<("Naman")<<" ";
          break;
      }
    }

    // case 2:                            // TC = O(n)
    for(int i=0 ; i<n ; i++){             
      for(int j=0 ; j<n ; j++){         
        if (j==0)
          break;
      }
    }
 
    // case 3:                            // TC = O(n)
    int j=0 ;                       
    for(int i=0 ; i<n ; i++){             
      while(j<n){     
        cout<< j <<" ";
          j++;
      }
    }

    // case 4:                            // TC = O(n^2)                     
    for(int i=0 ; i<n ; i++){         // Continue will not skip the the iteration.
        for(int j=0 ; j<n ; j++){
            continue;
        }         
    }

    // case 5:                            // TC = O(4n+n-4) = O(n)                     
    for(int i=0 ; i<n ; i++){ 
        if (i<4) continue;       
        for(int j=0 ; j<n ; j++){
            cout<<"* "<<" ";
        }         
    }

    // case 6:                             // TC = O(n)
    int count = 0;
    for(int i=0 ; i<n ; i++){   
        for(int j=i ; j<=i ; j++){
            count++ ;
        }         
    }

    // case 6:                             // TC = O(n)
    for(int i=0 ; i<n ; i++){         
        for(int j=1 ; j<=n ; j++){
            i++ ;
        }         
    }

    // Case 7:Important                     // TC = O(log(log(n)))
    for(int i=2; i<=n ; i*=i){      // i = 2,4,16,256,.......
        cout<<("Raghav");           // i = 2^(2^0) , 2^(2^1) , 2^(2^2) , ....... , 2^(2^x)
    }                               // 2^(2^x) = n => 2^x = log(n) => x = log(log(n))
    
}
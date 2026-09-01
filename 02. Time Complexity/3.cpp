#include<iostream>
using namespace std;
int main(){
    // Cases of AP GP :

    int n;
    cout<<"Enter value of n : ";
    cin>> n ;

    // Case 1: GP with ratio 2               // TC = O(x) = O(log(n))
    for(int i=1 ; i<=n ; i*=2){           
        cout<<("Naman")<<endl ;         // i = 1,2,4,8,16,....,n
    }                                   //     2^0, 2^1, 2^2,....., 2^x --> (x+1) terms
                                        // So,  n = 2^x
                                        //      x = TC = log2 (n)

    // case 2: GP with ratio 2
    for(int i=1 ; i<=n ; i+=i){              // TC = O(x) = O(log(n))
        cout<<("Naman")<<endl;
    }

    // case 3: GP with ratio 2 for i 
    for(int i=1 ; i<=n ; i*=2){              // TC = O(x) = O(n*log(n))
      for(int j=1 ; j<=n ; j++){         // as, log(n) times i and n times j each i --> n*log(n)
          cout<<("Naman")<<endl;
      }
    }

    // case 4: GP with ratio 2 for i 
    for(int i=1 ; i<=n ; i*=2){              // TC = O(x) = O(log(n)*log(n))
      for(int j=1 ; j<=n ; j*=2){        
          cout<<("Naman")<<endl;
      }
    }

    // case 5: GP with ratio 2 for i 
    for(int i=1 ; i<=n ; i*=2){              // TC = O(2n-1) = O(n)
      for(int j=1 ; j<=i ; j++){        // done by some of GP --> ( [2^(log n)-1]/2-1 )
          cout<<("Naman")<<endl;        //    or 
      }                                 //  S = 1+2+4+,.....+n/2+n
    }                                   //  S+1 = 1+1+2+4.... = n/2 + n/2 + n
                                        //  S+1 = 2n => S = 2n-1
                                        

    // Case 5:
    for(int i=1 ; i*i<=n ; i*=2){              // TC = O(log n^(1/2)) = O(log n)
        cout<<("Naman")<<endl;
    }


}
#include<iostream>
using namespace std ;
int main(){
      // Star rectangle //
    int r ,c ;
    cout<<"enter number of rows : " ;
    cin>> r ;
    cout<<"enter number of coulmn : " ;
    cin>> c ;
    for( int i = 1 ; i <= r ; i++ ){
        for( int j = 1 ; j <= c ; j++ ){
            cout<< " * ";
        }
        cout<< endl ;
    }
    int r1, c1;
    cout << "enter number of rows : ";
    cin >> r1;
    cout << "enter number of coulmn : ";
    cin >> c1;

    int i = 1;
    while (i <= r1) {
        
        int j = 1;
        while (j <= c1) {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }

}
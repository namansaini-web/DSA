#include<iostream>
using namespace std;
int main(){
    char x = '1';
    cout<< x<<endl;

    int y = 1;
    cout<< y <<endl;

    char z = 'G';
    cout<<(int)z<<endl;

    char w = 'G';
    int ascii = (int)w ;  //Explicit Typecasting//
    cout<< ascii << endl;

    char v = 'G';
    int ascii_no = v ;  //Implicit Typecasting//
    cout<< ascii_no <<endl;

    int var = 74;
    cout<<(char)var<<endl;
    
    char var1 = 'D';
    char var2 = 'E';
    cout<< var1 + var2 <<endl;

    cout<< (char)('f'+3);    // char --> int+int --> Char  //

     // INT-FLOAT //
    cout<<5/2<<endl;
    cout<<5/2.0<<endl;
    cout<<5.0/2<<endl;
    cout<<5.0/2.0<<endl;

     // BODMAS //
    int var4 = 2 / 3 * 6 ;
    cout<< var4 <<endl;
}
#include<iostream>
using namespace std;
int main(){
   // int x = 10;
   // x++;                 // Same as x = x + 1 //
   // cout<< x <<endl;

   // int y = 10 ; 
   // cout<< x++ << endl;

   int x = 10;
   cout<< x++ <<endl;  // Post means first use\print then increment //
   cout<< x <<endl;
   int x1 = 10;
   cout<< ++x1 << endl;  // Pre means first increment then use\print //
   cout<< x1 << endl;

   int x3 = 10;
   cout<< x-- <<endl;  // Post means first use\print then decrement //
   cout<< x3 <<endl;
   int x4 = 10;
   cout<< --x <<endl;  // Pre means fist decrement then use\print //
   cout<< x4 <<endl;

// Examples: //   

   int y1 = 8;
   int y2 = y1++ + --y1 ;
   cout<< y2 << endl;
   
   int z1 = 8;
   int z2 = z1++ + ++z1;
   cout<< z2 <<endl;   
}
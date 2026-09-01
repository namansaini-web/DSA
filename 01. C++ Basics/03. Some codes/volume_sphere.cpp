#include<iostream>
using namespace std;
int main(){
   cout<<"Enter radius of sphere in cm: ";
   float radius ;
   cin>> radius;
   float volume = 1.33334*3.14159*radius*radius*radius ; // highlight of this code // 
   cout<<"Volume of sphere : ";
   cout<< volume ;
   cout<< " cm";
}
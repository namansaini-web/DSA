#include<iostream>
using namespace std ;
void change(int* ptr){
    *ptr = 100;
} 
int main(){
    int x = 10;
    change(&x);
    cout<< x <<endl;
}
// Without Pointers we cannot change value by this method //
#include<iostream>
using namespace std ;
void CountDigits(int n, int* ptr){
    int count = (n==0) ? 1 : 0;
    while (n != 0){
        count++ ;
        n /= 10;
    }
    *ptr = count;
}
int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    int c = 0;
    CountDigits(n, &c);
    cout<< c;
}
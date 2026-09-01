#include<iostream>
using namespace std ;
int main(){ 

    int x1 ;
    if(false) cout<<"" ;
    else cout<<"else statement runs! ,when condition is false."<<endl ;

    int x2 ;
    if(true) cout<<"if statement runs! ,when condition is true."<<endl ;
    else cout<<"" ;


    // iss code me agar x True hoga toh Anjali print hoga nhi toh nitin print hoga //
    int x = 0 ;
    // int x = 3.45 ;   (Non zero)--> prints Anjali
    if(x) cout<<"Anjali"<<endl ;     
    else cout<<"nitin"<<endl ;

    int a = 0 ;
    if(a==0) cout<<"jitendra"<<endl ;  // '==' state true or false //
    else cout<<"Aanad"<<endl ;

    int b = 0 ;
    if(b = 0) cout<<"jitendra"<<endl ;  // '=' assign value //
    else cout<<"Aanad"<<endl ;


    if('w') cout<<"Darshti"<<endl ;  // ascii value of w is non zero which is true //
    else cout<<"Rishu"<<endl ;

    int x3 = 4 ;
    if(x3++) cout<< x3 <<endl ;
    else cout<<"Prem"<<endl ;

// Good example //
    int A = 4 , B = 6 ;
    if(A++ || B++) cout<< A << B <<endl ; // yahan 'or' ke case me agar , 
    else cout<<"Ayush"<<endl ;  //phele condition true ho gai toh dusri check nhi hoti haa,
                                //  isliye y ka incriment nhi hua !
                                
}                               
#include<iostream>
using namespace std ;
int n ;

 int main (){
    
     cout << "enter the number : " ;
     cin >> n ;
if (n>0 && ((n & (n-1))== 0 )){
    cout << n << "  is a number having power of 2" << endl ;
}
else {
    cout << "it isnt the power of n ";
}



 }
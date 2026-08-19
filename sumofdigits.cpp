#include <iostream>
using namespace std;


int number ;
int sumOfDigits (int x ){
int lastDig ;
int sum = 0 ;

    for (int i = 0 ; x > 0 ; i++)
    {   
        lastDig = x % 10 ;
        sum += lastDig ;
        x = x /= 10 ;
        }
        cout << sum ;
    return sum ;
    
}

 



 int main (){
    cout << " enter the number  : " ;
    cin >> number ;

    sumOfDigits(number);



    return 0 ;
 }
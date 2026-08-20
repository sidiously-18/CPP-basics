#include<iostream>
#include <cmath>
using namespace std ;

int binToDec(int bin){
    int x ;
    int sum = 0;

    for (int i = 0; bin > 0; i++)
    {
       x = bin % 10 ;
       sum += x * pow(2,i);
       bin = bin / 10 ;
    }
    return sum ;
}

int main(){
    int number ;
    cout << "enter the fucking binary number :  " ;
    cin >> number ;
    cout << binToDec(number) << endl;
    return 0 ;
}
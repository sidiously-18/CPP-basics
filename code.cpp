#include<iostream>
#include<cmath>
using namespace std;
int number ;
int decToBin(int dec){
    int remainder ;
    int sum = 0;
    for (int i = 0; dec > 0; i++)
    {
        remainder = (dec % 2);
        sum = sum + (remainder * pow(10,i)) ;
        dec = dec / 2 ;
    }
    return sum ;


}



int main (){
    
cout << "enter the decimal number that u want to convert in binary : ";
cin >> number ;
cout <<"The binary number for the number " << number << " is : " << decToBin(number)<<endl;
    return 0 ;
}

#include <iostream>
using namespace std;

// code in which user input a number and only numbers which are divisible by 3 are sorted out and summed together



 int main(){
    int number ;
    int sum = 0 ;
    cout<< " enter your number :  " ;
    cin >> number ;

    for (int i = 0; i <= number; i++)
    {
      if(i%3 == 0){

        sum = sum + i ;
      }
     
     
        
    }

    cout<< sum << " is the sumation of number divible by 3 upto "<< number<< endl;
    



 }



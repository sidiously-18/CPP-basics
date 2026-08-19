#include <iostream> 
using namespace std ;
// program requires the input of a number the the program provides a output which consists of factorial of the provided number
 int number ;
 int factorial = 1 ;
 


int main (){

    cout << " enter the number : " ;
    cin >> number ;
    for (int i = 1; i <=  number ; i++)
    {

       

        factorial = factorial * i;
       
       
    
    }
    cout << factorial << endl;
    


   


}
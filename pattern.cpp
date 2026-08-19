#include <iostream>
using namespace std;

int number ;
int integer = 1 ;


 int main (){

    cout << "enter a number : " << endl;
    cin >> number ;

    for (int i = 1; i <= number ; i++)
    {

      for (int k = 0;k < (number - i ); k++)
      {
         cout << "  " ;
      }
      
      for (int j = 1 ; j <= i ; j++)
    {
        cout <<  j << " " ;
     
     
    }
    for (int l = i - 1 ; l >= 1 ; l --)
    {
      cout <<  l  << " ";
    }
    
      ;
    cout << endl ;
    
}


     
    
    
    

 
   return 0 ;
}
#include <iostream>
using namespace std ;

 int main (){
    int smallest = INT_MAX ;
int array[4] = {32,43,56,-67} ;
   

  for (int i = 0; i < 4; i++)
    {
       if (array[i]< smallest){
        smallest = array[i];
       }
      
    }
     cout<< smallest ;

    
    

    
    
    
    
    return 0 ;
 }
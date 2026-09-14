#include <iostream>
using namespace std ;

 int main (){
    int largest = INT_MIN ;
int array[4] = {32,43,56,923874} ;
   

  for (int i = 0; i < 4; i++)
    {
       if (array[i]> largest){
        largest = array[i];
       }
      
    }
     cout<< largest ;

    
    

    
    
    
    
    return 0 ;
 }
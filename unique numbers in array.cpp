#include <iostream>
using namespace std;



 
 void unique (int arr[],int size){

    for (int i = 0; i < size; i++)
    {
         bool isUnique = true ;
        
        for (int j = 0; j < i; j++)
        {
            if ( arr[i] == arr[j]){
                isUnique = false ;
                break ;
            }

        }
        if (isUnique){
            cout << arr[i]<< " " ;
        }
        
    }
    


 } 
    
   


 int main(){
   

    int arr[8]={23,45,78,34,21,23,45,34};

    unique (arr,8);


  

    
    
    
    return 0 ;


 }



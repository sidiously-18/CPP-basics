#include <iostream>
using namespace std;


void interSection (int arr[],int brr[],int size , int bize){

    for (int i = 0; i < size; i++)
    {
        

        for (int j = 0; j < bize; j++)
        {
              if( arr[i] == brr[j]){
                cout << arr[i] << " ";
                break ;



        }
        }
        
      
    }
    
}
 int main(){
    int arr[5]={23,45,78,34,21};
    int brr [5] = {45,36,78,21,79};

    interSection(arr,brr,5,5) ;

    
    return 0 ;


 }
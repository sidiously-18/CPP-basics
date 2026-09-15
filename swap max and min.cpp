#include <iostream>
using namespace std;

int max (int arr[],int size){
    int max = INT_MIN;
    int maxIndex = 0 ;
    for (int i = 0; i < size; i++)
        {
            if(max < arr[i]){
                max = arr[i];
                maxIndex = i ;
            }
        }
        return maxIndex  ;

 }
 int min (int arr[],int size){
    int min = INT_MAX ;
    int minIndex = 0 ;
    for (int i = 0; i < size; i++)
        {
            if(min > arr[i]){
                min = arr[i];
                minIndex = i ;
            }
        }
        return minIndex;

 }
    
   


 int main(){
    int a ;
    int b ;

    int arr[5]={23,45,78,34,21};
a = max(arr,5);
b = min (arr,5);

 swap(arr[a],arr[b]) ;

 for (int i = 0; i < 5; i++)
 {
    cout << arr[i]<<endl;
 }
 
    

  

    
    
    
    return 0 ;


 }



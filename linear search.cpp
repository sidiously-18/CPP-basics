#include<iostream>
using namespace std;

int linearSearch (int arr[],int target){
    for (int i = 0; i < target ; i++)
    {
        if (arr[i] == target){
            return i ;
        }
        


    }
    
    return -1;


} 


int main(){
int a ;


    int arr[5] = {45,32,87,56,90} ;

    cout << " Enter the finding number :  " << endl ;
    cin >>  a ;

   cout << linearSearch(arr,a) << endl;




    return 0 ;
    

 }
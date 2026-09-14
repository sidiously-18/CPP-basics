#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50} ;
    int n = 5 ;


    int left = 0 ;
    int right = n - 1 ;

    while (left < right){

        swap(arr[left],arr[right]);
        right -- ;
        left ++ ;
    }
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


   
    return 0 ;
    

 }
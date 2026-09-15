#include <iostream>
using namespace std;



int hishoob(int arr[], int size,bool multiplication){
   int result = 0 ;
    

    if (multiplication ){
        result = 1 ;
        for (int i = 0; i < size; i++)
        {
             result =  result * arr[i] ;
        }
        return result ;
        
    }
    else {
        for (int i = 0; i < size; i++)
        {
            result = result + arr[i] ;
        }
        return  result ;
        //addtion logic
    }

}
 int main(){
    int arr[5]={23,45,78,34,21};
    int n ;
    bool mul ;
    cout<< " addition = 1\n multiplication = 2\n" ;
    cin >> n ;
    if (n == 1){
        mul = false ;
    }
    else if (n == 2){
        mul = true ;
        }
        else
    {
        cout << "Invalid choice";
        return 0;
    }

      cout << hishoob(arr, 5, mul);
    
    return 0 ;


 }



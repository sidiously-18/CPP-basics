#include <iostream>
using namespace std;



bool Isprime = true ;
 int main(){
   int n ;
   

   cout << " enter your number :  ";
   cin >> n ;

   if (n < 2) {
    cout << "Not prime"<< endl ;
    return 0;
}



for(int i = 2; i * i <= n; i++){
      if (n%i == 0){
         Isprime = false;

         break ;}
      }

         if(Isprime){
            cout << n << " is prime"<< endl;

         }
         else {
            cout << n << " is not prime "<< endl;
         }
         return 0;
   }
   





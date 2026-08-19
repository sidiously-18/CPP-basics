#include <iostream>
using namespace std;
int n ;
int r ;

int factorial (int x){
    int fact = 1 ;
    for (int i = 1; i <=  x ; i++)
    {
        fact = fact * i;
       }
   return fact ;
}

int combination (int n,int r){

    return (factorial(n) / (factorial(r)*factorial(n-r)) );
}

int main (){
    cout <<" enter number for n : " ;
    cin >> n ;

    cout << " enter number for r : ";
    cin >> r ;
    if ( n < r || r <= 0){

        cout << "Invalid input:  N cannot be lesser than R " ;
    }
    else {
        cout << combination(n,r) << endl;
    }

    return 0;
}
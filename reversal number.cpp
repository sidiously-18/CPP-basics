#include <iostream>
using namespace std;

int n;

void work(int n) {
    int digit;
    int rev = 0;

    while (n > 0) {
        digit = n % 10;          // extract last digit
        n = n / 10;              // remove last digit
        rev = rev * 10 + digit;  // build reversed number
    }

    cout << rev;
}

int main() {
    cout << "Enter a number: ";
    cin >> n;

    work (n);

    return 0;
}
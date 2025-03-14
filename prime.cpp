#include <iostream>
using namespace std;
int main() {
    int num, i, j;
    bool isPrime;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 2) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }
    isPrime = true;
    for (i = 2; i <= num / 2; i++) { 
        for (j = 2; j <= i; j++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) break;
    }
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}


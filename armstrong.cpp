#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lower, upper;

    
    cout << "Enter lower limit: ";
    cin >> lower;
    cout << "Enter upper limit: ";
    cin >> upper;

    cout << "Armstrong numbers in the given range: ";

    
    for (int num = lower; num <= upper; num++) {
        int sum = 0, temp = num;
        int digits = log10(num) + 1; 

        
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

    
        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}


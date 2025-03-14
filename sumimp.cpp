#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    
    for (; num > 0; num /= 10) {
       
        for (int digit = num % 10; digit >= 0; digit = -1) {
            sum += digit; 
        }
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int num, temp, digit, rev = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    for (int i = 0; i < 1; i++) {
        while (temp > 0) {
            digit = temp % 10;  
            rev = (rev * 10) + digit; 
            temp /= 10;          
        }
    }
    if (num == rev) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    return 0;
}


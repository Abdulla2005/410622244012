#include <iostream>
using namespace std;
int main() {
    int num, range;
    cout << "Enter the number for the multiplication table: ";
    cin >> num;
    cout << "Enter the range up to which you want the table: ";
    cin >> range;
    cout << "\nMultiplication Table of " << num << ":\n";
    for (int i = 1; i <= num; i++) {
        cout << "\nTable of " << i << ":\n";
        for (int j = 1; j <= range; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    return 0;
}


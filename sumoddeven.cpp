#include <iostream>
using namespace std;

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            sum += arr[i];
    return sum;
}


int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] % 2 != 0)
            sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {3, 8, 5, 12, 7, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of Even numbers: " << sumEven(arr, size) << endl;
    cout << "Sum of Odd numbers: " << sumOdd(arr, size) << endl;

    return 0;
}


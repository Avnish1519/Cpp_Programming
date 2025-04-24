#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {//function
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;//decrement

        while (j >= 0 && arr[j] > key) {//loop
            arr[j + 1] = arr[j];
            j = j - 1;//decrement operation
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

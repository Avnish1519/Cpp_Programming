#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void minElement(int arr[], int n) {
    sortArray(arr, n);
    int minEle = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minEle) {
            minEle = arr[i];
        }
    }
    cout << minEle;
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    minElement(arr, n);
    return 0;
}
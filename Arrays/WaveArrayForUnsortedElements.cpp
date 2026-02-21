#include <iostream>
using namespace std;
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {//using a for loop
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void sortInWaveArray(int arr[], int n)
{
    sortArray(arr,n);

    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortInWaveArray(arr, n);

    cout << "Wave Formed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

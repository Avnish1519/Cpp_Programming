#include <iostream>
using namespace std;
//Printing of the sorted arrays
void SortedArray(int* arr,int size){//function to print sorted array
    for (int i = 0; i < size; i++) {//loop
        cout << arr[i] << " ";//print fn
    }
}
void BubbleSort(int* arr, int size) {//function
    for (int i = 0; i < size - 1; i++) {//loop
        for (int j = 0; j < size - i - 1; j++) {//loop 
            if (arr[j] > arr[j + 1]) {//condition
                //Swapping of adjacent elemnts
                int temp = arr[j];//temp variable assigned to j
                arr[j] = arr[j+1];//Element at index j is assigned to j+1
                arr[j+1] = temp;
            }
        }
    }
    
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};//declaring and intializing the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    BubbleSort(arr, size);
    SortedArray(arr, size);
    
    
    return 0;//using the return keyword
}

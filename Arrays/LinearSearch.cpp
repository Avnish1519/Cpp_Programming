#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};//array declared
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Second way to find the the element using linear search

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  
  int a;
  cout<<"Enter the target interger to search as 'a': ";
  cin>>a;
  

  int arr[n];
  cout<<"Enter the array: ";
  for(int i=0; i<n; i++) {
      cin>>arr[i];
  }
  
  
  for(int i=0; i<n; i++) {
     if(arr[i] == a) {
        cout<<"Element found at index: "<<i;
     }
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   int sum;

   for(int i=1;i<=n;i++) {
       sum+=i;
   }

   cout<<"The sum of the numbers is: "<<sum<<endl;

   return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>//using binary Search
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid; // Found at index mid
        else if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1; // Not found
}

int main() {
    int arr[] = {3, 4, 9, 13, 17, 18, 21, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream> //using linear Search
using namespace std;

int main() {
    int A[] = {3, 4, 9, 13, 17, 18, 21, 27};
    
    for(int i=0; i<8; i++) {
        if(A[i]==30) {
            cout<<"Element found at index "<<i<<endl;
        }
    }
    
}

---------------------------------------------------------------------------------------------------------------
   #include <iostream>
using namespace std;

int main() {
    int a, b=0;
    cout<<"Enter the value of a: ";
    cin>>a;
    
    for(int i=0; i<a; i++) {
        b+=i;
    }
    
    cout<<"The value of b is: "<<b<<endl;

    return 0;
}
     
--------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

string insertChar(string &s, char c, int pos) {//using the function
  
    // Insert character at specified position
    s.insert(s.begin() + pos, c);
  	return s;
}

int main() {
    string s = "Avnish";
    cout << insertChar(s, 'A', 3);
    return 0;
}

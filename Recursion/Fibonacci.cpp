#include <iostream>//library function
using namespace std;

// Recursive function to find Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1)
        return n;//using return keyword
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";//printing the fibonacci sequence
    for (int i = 0; i < n; i++) {//using for-loop
        cout << fibonacci(i) << " ";//printing the output
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int findFibonacci(int n) {
  
   // base case n = 0  n = 1
   if (n == 0) {
      return 0;
   } else if (n == 1) {
      return 1;
   } else {
      return findFibonacci(n - 2) + findFibonacci(n - 1);
   }
}

vector<int> fibonacciNumbers(int n) {
   vector<int> ans;
   for (int i = 0; i < n; i++) {
      ans.push_back(findFibonacci(i));
   }
   return ans;
}

int main() {
   int n = 7;
   vector<int> res = fibonacciNumbers(n);
   for (int i = 0; i < res.size(); i++) {
      cout << res[i] << " ";
   }
   return 0;
}

#include<iostream>
using namespace std;

int factorial(int num) {//function to print factorial
    if(num == 0)
        return 1;
    else {
        int smaller = factorial(num - 1);
        int bigger = num * smaller;
        return bigger;//returns the bigger no
    }
}

int main() {
    int num;
    cin >> num;//input fn
    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;
    return 0;
}

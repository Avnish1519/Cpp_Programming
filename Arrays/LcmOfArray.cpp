#include <iostream>
using namespace std;

int gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);//using a return statement
}

int main() {
    long int arr[] = {2, 3, 4};
    int n = 3, result = arr[0];

    for (int i = 1; i < n; i++)//using for loop
        result = lcm(result, arr[i]);

    cout << "LCM = " << result << endl;//printing the output
    return 0;
}

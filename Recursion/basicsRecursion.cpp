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
-----------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int sum(int  n){
    if (n == 1)
     return  1 ;
    return n + sum(n - 1); 
}

int main() {
    int n = 5 ;
    cout <<  sum(n); 
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int fact(int n)
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    cout << "Factorial of 5 : " << fact(5);
    return 0;
}


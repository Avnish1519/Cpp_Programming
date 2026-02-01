class Solution {//class solution declared
public:
    int fib(int n) {
        if (n == 0 || n == 1) return n;//using if-control statement
        int a = 0, b = 1;
        for (int i = 2; i <= n; ++i) {//using a for-loop
            int temp = a + b;//swapping values of a with b and vice versa using a temprory variable
            a = b;
            b = temp;
        }
        return b;//return statement
    }
};

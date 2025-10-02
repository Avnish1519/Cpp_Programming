class Solution {//class
    public:
        int fib(int n) {
            if(n==0 || n==1){//using if-else 
                return n;
    
            }else{
                return fib(n-1) + fib(n-2);
            }
            
        }
    };

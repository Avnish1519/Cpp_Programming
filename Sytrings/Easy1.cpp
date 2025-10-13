class Solution {
    public:
        int minimumRecolors(string blocks, int k) {//function
            int n = blocks.size();
            int result = k;
    
            for (int i = 0; i <= n - k; i++) {//using for loop 
                int W = 0;
                for (int j = i; j-i+1 <= k; j++) {
                    if (blocks[j] == 'W') {
                        W++;
                    }
                }
                result = min(result, W);
            }
    
            return result;
        }
    };

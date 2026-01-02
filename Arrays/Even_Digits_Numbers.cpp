//class solution is created
class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int ans = 0;//initializing ans
            for(int val : nums) {//using for loop
                string s = to_string(val);
                if(!(s.length() & 1))//using if control statement
                    ans++;
            }
            return ans;//returns answer
        }
    };

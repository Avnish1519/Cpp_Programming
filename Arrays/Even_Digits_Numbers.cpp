class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int ans = 0;
            for(int val : nums) {
                string s = to_string(val);
                if(!(s.length() & 1))
                    ans++;
            }
            return ans;
        }
    };
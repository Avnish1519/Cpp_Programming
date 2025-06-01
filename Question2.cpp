class Solution {//class declarartion
    public:
        int countLargestGroup(int n) {
           vector<int> count(37,0);
            for(int i=1;i<=n;i++){
                count[calc_sum(i)]++;
            }
            int maxi=*max_element(count.begin(),count.end());
            int ans=0;
            for(auto i:count){
                if(i==maxi)ans++;
            }
            return ans;
        }
        int calc_sum(int n){//function
            return n==0?0:(n%10)+calc_sum(n/10);  
        }
    };
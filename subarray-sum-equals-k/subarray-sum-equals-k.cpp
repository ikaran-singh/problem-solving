class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int res = 0;
        
        unordered_map<int, int> cum_sums{};
        int curr_sum = 0;
        cum_sums[curr_sum]++;
        for(int i : nums) {
            curr_sum += i;
            int diff = curr_sum - k;
            if(cum_sums.find(diff) != cum_sums.end()) {
                res += cum_sums[diff];
            }
            cum_sums[curr_sum]++;
        }
        
        return res;
    }
};
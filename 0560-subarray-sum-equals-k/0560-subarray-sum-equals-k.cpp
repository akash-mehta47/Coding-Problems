class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        long long preSum=0;
        unordered_map<long long,int> prefixSum;
        prefixSum[0]=1;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            count += prefixSum[preSum-k];
            prefixSum[preSum]+=1;
        }
        return count;
    }
};
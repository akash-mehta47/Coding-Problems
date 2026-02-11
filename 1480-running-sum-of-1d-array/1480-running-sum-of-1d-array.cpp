class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<long long> preSum(nums.size()+1,0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            preSum[i+1]=preSum[i]+nums[i];
            ans.push_back(preSum[i+1]);
        }
        return ans;
    }
};
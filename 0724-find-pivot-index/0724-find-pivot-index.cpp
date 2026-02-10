class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> preSum(n+1,0);
        for(int i=0; i<n; i++){
            preSum[i+1]=preSum[i]+nums[i];
        }
        
        for(int i=0;i<n;i++){
            long long leftSum=preSum[i];
            long long rightSum=preSum[n]-preSum[i+1];
            if(leftSum==rightSum){
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        if(n==0) return -1;

        vector<int> sufMin(n);
        sufMin[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            sufMin[i] = min(nums[i],sufMin[i+1]);
        }
        int runMax=nums[0];
        for(int i=0; i<n; i++){
            runMax = max(runMax, nums[i]);
            if(runMax - sufMin[i] <= k ){
                return i;
            }
        }
        
        return -1;
    }
};
class NumArray {
public:
    vector<long long> preSum;
    
    NumArray(vector<int>& nums) {
        preSum.resize(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            preSum[i+1]=preSum[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return preSum[right+1]-preSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
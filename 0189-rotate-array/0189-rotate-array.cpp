class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k==0) return;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            swap(nums[i],nums[n-i-1]);
        }
        for(int i=0;i<k/2;i++){
            swap(nums[i],nums[k-i-1]);
        }
        for(int i=0;i<(n-k)/2;i++) {
            swap(nums[k+i],nums[n-i-1]);
        }
    }
};
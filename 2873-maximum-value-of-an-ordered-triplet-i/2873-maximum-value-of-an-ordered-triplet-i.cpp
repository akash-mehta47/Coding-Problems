class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        long long max_i=0;
        long long max_ij=-1e9;
        for(int i=0;i<n;i++){
            ans=max(ans,max_ij*nums[i]);
            max_ij=max(max_ij,max_i-nums[i]);
            max_i=max(max_i,(long long)nums[i]);
        }
        return ans;

    }
};
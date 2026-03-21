class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        unordered_map<int,long long> mpp;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mpp[i]=sum;
        }
        for(int i=0;i<mpp.size();i++){
            int left=0;
            if(i>0) left = mpp[i-1];
            int right = mpp[n-1]-mpp[i];
            if(left==right){
                ans=i;
                return ans;
            }
        }
        return ans;
    }
};
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long count = 1;
        long ans = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count=1;
            }else{
                count++;
            }
            ans+=count;
        }
        return ans;
    }
};
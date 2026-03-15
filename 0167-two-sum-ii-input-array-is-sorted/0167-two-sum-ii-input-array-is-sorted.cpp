class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=nums.size()-1;
        while(a<b){
            if(nums[a]+nums[b]==target){
                return {a+1,b+1};
            }else if(nums[a]+nums[b]>target){
                b--;
            }else if(nums[a]+nums[b]<target){
                a++;
            }
        }
        return {};
    }
};
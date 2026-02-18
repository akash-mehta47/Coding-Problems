class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int break_index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break_index=i;
                break;
            }
        }
        if(break_index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>break_index;i--){
            if(nums[i]>nums[break_index]){
                swap(nums[i],nums[break_index]);
                break;
            }
        }
        reverse(nums.begin()+break_index+1,nums.end());
        
    }
};
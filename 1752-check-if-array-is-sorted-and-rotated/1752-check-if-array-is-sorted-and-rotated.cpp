class Solution {
public:
    bool check(vector<int>& nums) {
        int break_point=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                break_point++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            break_point++;
        }
        
        return break_point <=1;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                maj=nums[i];
                count=1;
            }else if(maj==nums[i]){
                count++;
            }else{
                count--;
            }
        }
        int ans=0;
        for(int i:nums){
            if(i==maj){
                ans++;
            }
        }
        return ans>nums.size()/2 ? maj:-1;
    }
};
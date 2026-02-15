class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's voting algorithm
        int maj;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                maj=nums[i];
                count=1;
            }
            else if(nums[i]==maj){
                count++;
            }else{
                count--;
            }
        }
        int ans=0;
        for(int i:nums){
            if(maj==i){
                ans++;
            }
        }
        if(ans>nums.size()/2){
            return maj;
        }

        return -1;
    }
};
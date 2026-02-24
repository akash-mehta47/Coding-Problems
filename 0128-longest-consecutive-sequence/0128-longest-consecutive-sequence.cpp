class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int maxi=1;
        int lastNum=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastNum){
                count++;
                lastNum=nums[i];
            }
            else if(nums[i]!=lastNum){
                count=1;
                lastNum=nums[i];
            }
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
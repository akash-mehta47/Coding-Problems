class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int x=nums.size();
       int temp=0;
       for(auto i:nums){
        temp^=i;
       }
       for(int i=0;i<=x;i++){
        temp^=i;
       }
       return temp;
    }
};
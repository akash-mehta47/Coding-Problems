class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=i;
        }
        for(int i=0;i<op.size();i++){
            int temp=hash[op[i][0]];
            nums[temp]=op[i][1];
            hash[op[i][1]]=temp;
        }
        return nums;
    }
};
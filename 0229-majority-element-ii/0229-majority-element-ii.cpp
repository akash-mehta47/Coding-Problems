class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> hash;
        for(int num:nums){
            hash[num]++;
        }
        for(auto &num:hash){
            if(num.second>nums.size()/3){
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};
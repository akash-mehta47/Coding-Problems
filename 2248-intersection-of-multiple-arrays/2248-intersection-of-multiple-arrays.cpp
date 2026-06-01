class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                hash[nums[i][j]]++;
            }
        }
        vector<int> ans;
        for(auto it:hash){
            if(it.second==nums.size()){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
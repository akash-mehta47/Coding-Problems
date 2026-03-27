class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i:nums){
            mpp[i]++;
        }
        priority_queue<pair<int,int>> que;
        for(auto const& [val,freq] : mpp){
            que.push({freq,val});
        }
        vector<int> ans;
        while(k>0){
            ans.push_back(que.top().second);
            que.pop();
            k--;
        }
        return ans;
    }
};
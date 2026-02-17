class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        vector<int> pos;
        vector<int> neg;
        for(int i:nums){
            if(i<0){
                neg.push_back(i);
            }else{
                pos.push_back(i);
            }
        }
        vector<int>ans;
        for(int i=0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
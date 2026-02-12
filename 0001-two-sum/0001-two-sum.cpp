class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> index;
        for(int i=0;i<nums.size();i++){
            index.push_back({nums[i],i});
        }
        int i=0;
        int j=nums.size()-1;
        sort(index.begin(),index.end());
        while(i<j){
            int sum = index[i].first + index[j].first;
            if(sum<target){
                i++;
            }else if(sum>target){
                j--;
            }else{
                return {index[i].second,index[j].second};
            }
        }
        return {};
    }
};
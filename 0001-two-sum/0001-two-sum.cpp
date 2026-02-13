class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> index;
        for(int i=0;i<nums.size();i++){
            index.push_back({nums[i],i});
        }
        int left=0;
        int right=nums.size()-1;
        sort(index.begin(),index.end());
        while(left<right){
            int sum=index[left].first+index[right].first;
            if(sum<target){
                left++;
            }else if(sum>target){
                right--;
            }else{
                return {index[left].second,index[right].second};
            }
        }
        return {};
    }
};
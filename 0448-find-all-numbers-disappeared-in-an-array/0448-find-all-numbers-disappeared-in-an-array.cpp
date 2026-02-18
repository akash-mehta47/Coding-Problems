class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> actualArr(nums.size()+1);
        for(int i:nums){
            actualArr[i]++;
        }
        vector<int> ans;
        for(int i=1;i<actualArr.size();i++){
            if(actualArr[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
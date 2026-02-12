class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        for(int i = 0; i<nums.size();i++){
            int a = nums[i];
            int rem = target-a;
            if(hash.find(rem)!=hash.end()){
                return {hash[rem],i};
            }
            hash[a]=i;
        }
        return {};
    }
};
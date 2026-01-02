class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int temp=hash[0];
        for(int i=0;i<hash.size();i++){
            if(hash[nums[i]]>1){
                return nums[i];
            }
        }
        return -1;
    }
};
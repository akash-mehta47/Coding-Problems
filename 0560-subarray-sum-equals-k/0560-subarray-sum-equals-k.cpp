class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        long long presum=0;
        unordered_map<long long,int> hash;
        hash[0]=1;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if (hash.find(presum - k) != hash.end()) {
                count += hash[presum - k];
            }
            hash[presum]++;
        }
        return count;
    }
};
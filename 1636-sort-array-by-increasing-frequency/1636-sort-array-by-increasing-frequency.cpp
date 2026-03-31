class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i:nums){
            hash[i]++;
        }
        sort(nums.begin(),nums.end(), [&](int a,int b){
            if(hash[a] == hash[b]){
                return a>b;
            }
            return hash[a]<hash[b];
        });
        return nums;
    }
};
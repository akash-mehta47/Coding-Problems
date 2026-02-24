class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> hashset;
        int maxi=1;
        for(int i:nums){
            hashset.insert(i);
        }
        for(auto i:hashset){
            if(hashset.find(i-1)==hashset.end()){
                int start=i;
                int count=1;
                while(hashset.find(start+1)!=hashset.end()){
                    count++;
                    start++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};
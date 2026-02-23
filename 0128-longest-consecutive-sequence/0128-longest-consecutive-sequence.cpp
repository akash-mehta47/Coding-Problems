class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> ans(nums.begin(),nums.end());
        int maxi=0;
        for(int i:ans){
            if(ans.find(i-1)==ans.end()){
                int current=i;
                int streak=1;
                while(ans.find(current+1)!=ans.end()){
                    streak+=1;
                    current+=1;
                }
                maxi=max(maxi,streak);
            }
        }
        return maxi;
    }
};
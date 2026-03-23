class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int totalXor=0;
        for(int i:nums){
            totalXor^=i;
        }
        int mask = (unsigned int)totalXor & -(unsigned int)totalXor;
        int a=0;
        for(int i:nums){
            if(i & mask){
                a^=i;
            }
        }
        return {a,totalXor^a};
    }
};
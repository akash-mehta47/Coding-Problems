class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i:nums){
            hash[i]++;
        }
        int temp=0;
        for(auto p:hash){
            if(p.second==2){
                temp^=p.first;
            }
        }
        return temp;
    }
};
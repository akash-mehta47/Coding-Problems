class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int duplicated=-1,missing=-1;
        for(int i=0;i<hash.size();i++){
            if(hash[i]==2){
                duplicated=i;
            }else if(hash[i]==0){
                missing=i;
            }
        }
        return {duplicated,missing};
    }
};
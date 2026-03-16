class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        int a=0;
        int b=nums.size()-1;
        while(a<=b){
            if(a==b) ans+=nums[a];
            else ans+=stoll(to_string(nums[a])+to_string(nums[b]));
            a++;
            b--;
        }
        return ans;
    }
};
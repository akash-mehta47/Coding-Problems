class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            int current = nums[i];
            while(current>0){
                sum+=current%10;
                current/=10;
            }
            if(sum<ans){
                ans=sum;
            }
        }
        return ans;
    }
};
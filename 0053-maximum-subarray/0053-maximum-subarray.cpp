class Solution {
public:
    //kadan's algorithms
    int maxSubArray(vector<int>& nums) {
        long long maxx=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxx=max(sum,maxx);
            if(sum<0){
                sum=0;
            }
        }
        return maxx;
    }
};
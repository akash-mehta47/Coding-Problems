class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size();
        int peak=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                peak=i;
                break;
            }
        }
        long long ascendingSum=0,descendingSum=0;
        for(int i=0;i<=peak;i++){
            ascendingSum+=nums[i];
        }
        for(int i=peak;i<=n-1;i++){
            descendingSum+=nums[i];
        }
        if(descendingSum==ascendingSum) return -1;
        else if (descendingSum>ascendingSum) return 1;
        else return 0;
    }
};
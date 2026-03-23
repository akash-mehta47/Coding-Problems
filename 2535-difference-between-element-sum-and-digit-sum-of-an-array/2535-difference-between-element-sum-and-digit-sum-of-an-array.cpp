class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long elemSum=0;
        long long digitSum=0;
        for(int i=0;i<nums.size();i++){
            digitSum+=nums[i];
            int temp=nums[i];
            if(nums[i]<=9){
                elemSum+=temp;
            }else{
                while(temp>0){
                    int digit=temp%10;
                    temp/=10;
                    elemSum+=digit;
                }
            }
        }
        return abs(elemSum-digitSum);
    }
};
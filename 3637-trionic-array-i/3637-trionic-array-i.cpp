class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int count=0;
        if(nums.size()<4){
            return false;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(count==0){
                if(nums[i]<nums[i+1]){

                }
                else if(nums[i]>nums[i+1] && 0<i ){
                    count=1;
                }
                else return false;
            }
            if(count==1){
                if(nums[i]>nums[i+1]){

                }
                else if(nums[i]<nums[i+1]){
                    count=2;
                }
                else return false;
            }
            if(count==2){
                if(nums[i]<nums[i+1]){

                }
                else return false;
            }
        }
        return count==2;
    }
};
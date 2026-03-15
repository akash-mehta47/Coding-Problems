class Solution {
public:
    int binaryS(vector<int> nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid])  return binaryS(nums,mid+1,high,target);
        else return binaryS(nums,low,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
        return binaryS(nums,0,nums.size()-1,target);
    }
};
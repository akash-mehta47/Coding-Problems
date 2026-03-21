class Solution {
public:

    int firstOcc(vector<int>& nums,int n,int target){
        int low=0,high=n-1,first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return first;
    }
    int secondOcc(vector<int>& nums,int n,int target){
        int low=0,high=n-1,last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;
            }
            if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOcc(nums,nums.size(),target);
        if(first==-1) return {-1,-1};
        int second=secondOcc(nums,nums.size(),target);
        return {first,second};
    }
};
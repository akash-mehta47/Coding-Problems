class Solution {
public:

    long long minSum(vector<int>& arr,int mid){
        long long sum=0;
        for(int i:arr){
            sum+=(i+mid-1)/mid;
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=minSum(nums,mid);
            if(sum<=threshold){
                ans=mid;
            }
            if(sum>threshold){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
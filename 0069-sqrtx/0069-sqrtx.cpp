class Solution {
public:
    int mySqrt(int x) {
        int ans=1,low=1,high=x;
        while(low<=high){
            int mid=low+(high-mid)/2;
            if(mid<=x/mid){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
    }
};
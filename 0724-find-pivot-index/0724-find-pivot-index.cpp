class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<long long> pre(n+1);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        for(int i=0;i<n;i++){
            long long left=pre[i];
            long long right = pre[n]-pre[i+1];
            if(left==right){
                return i;
            }
        }
        return -1;        
    }
};
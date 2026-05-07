class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i+1;j<n;j++){
                if(nums[i]&1 && (nums[j]&1)==0){
                    count++;
                }else if((nums[i]&1)==0 && nums[j]&1){
                    count++;
                }
            }
            ans[i]=count;
        }
        return ans;
    }
};
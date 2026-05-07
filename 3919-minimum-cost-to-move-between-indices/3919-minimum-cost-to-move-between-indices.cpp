class Solution {
public:
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();

        vector<int> closest(n);
        for(int i=0;i<n;++i){
            if(i == 0) closest[i]=1;
            else if( i == n-1 ) closest[i] = n-2;
            else{
                long long diffleft=abs((long long)nums[i]-nums[i-1]);
                long long diffright=abs((long long)nums[i]-nums[i+1]);
                if(diffright<diffleft) closest[i]=i+1;
                else closest[i]=i-1;
            }
        }

        vector<long long> prefRight(n,0);
        for(int i=0;i<n-1;++i){
            int cost = (closest[i]==i+1) ? 1 : abs(nums[i+1] -nums[i]);
            prefRight[i+1]=prefRight[i]+cost;
        }
        vector<long long> prefLeft(n,0);
        for(int i=n-1;i>0;--i){
            int cost = (closest[i]==i-1) ? 1 : abs(nums[i] -nums[i-1]);
            prefLeft[i-1]=prefLeft[i]+cost;
        }

        vector<int> ans;
        for(auto& q:queries){
            int f=q[0],s=q[1];
            if(f<s){
                ans.push_back(prefRight[s]-prefRight[f]);
            }else{
                ans.push_back(prefLeft[s]-prefLeft[f]);
            }
        }
        return ans;
    }
};
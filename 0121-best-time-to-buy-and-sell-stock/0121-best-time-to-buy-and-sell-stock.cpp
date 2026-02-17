class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int profit=0;
        for(int i:prices){
            if(i<minn){
                minn=i;
            }else{
                profit=max(profit,i-minn);
            }
        }
        return profit;
    }
};
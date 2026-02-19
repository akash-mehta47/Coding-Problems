class Solution {
public:
    int totalMoney(int n) {
        int week_sum=28;
        int weeks=n/7;
        int days=n%7;
        int ans=0;
        if(weeks==0){
            ans=0;
            for(int i=1;i<=n;i++){
                ans+=i;
            }
            return ans;
        }
        ans+=week_sum;
        for(int i=1;i<weeks;i++){
            ans=ans+(week_sum+(i*7));
        }
        int j=weeks+1;
        for(int i=j;i<=days+weeks;i++){
            ans+=i;
        }
        return ans;
    }
};
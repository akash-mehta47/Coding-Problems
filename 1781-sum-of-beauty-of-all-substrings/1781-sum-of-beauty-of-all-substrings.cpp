class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int minn=INT_MAX;
                int maxx=INT_MIN;
                for(int val :freq){
                    if(val>0){
                        minn=min(minn,val);
                        maxx=max(maxx,val);
                    }
                }
                ans+=abs(minn-maxx);
            }
        }
        return ans;
    }
};
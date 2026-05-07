class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        int n=s.length();
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxx=0;
                int minn=s.size();

                for(int fr:freq){
                    if(fr>0){
                        maxx=max(maxx,fr);
                        minn=min(minn,fr);
                    }
                }
                ans+=maxx-minn;
            }
        }
        return ans;
    }
};
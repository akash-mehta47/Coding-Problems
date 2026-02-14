class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int alp='a';
        string ans="";
        for(int i=0;i<words.size();i++){
            string currentWord=words[i];
            int sum=0;
            for(char j:currentWord){
                sum+=weights[abs(j-alp)];
            }
            int temp=sum%26;
            char finalChar=(char)('z'-temp);
            ans+=finalChar;
        }
        return ans;
    }
};
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            string sentence=sentences[i];
            ans=max(ans,(int)count(sentence.begin(),sentence.end(),' '));
        }
        return ans+1;
    }
};
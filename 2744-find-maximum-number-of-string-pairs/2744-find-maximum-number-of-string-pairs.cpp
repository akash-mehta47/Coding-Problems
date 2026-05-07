class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            string current=words[i];
            for(int j=i+1;j<words.size();j++){
                string reversed=words[j];
                reverse(reversed.begin(),reversed.end());
                if(current==reversed) ans++;
            }
        }
        return ans;
    }
};
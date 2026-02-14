class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int> hash;
        for(int i=0;i<words.size();i++){
            if(words[i].size()>=k){
                string sub=words[i].substr(0,k);
                hash[sub]++;
            }
        }
        int ans=0;
        for(auto i:hash){
            if(i.second>=2){
                ans++;
            }
        }
        return ans;
    }
};
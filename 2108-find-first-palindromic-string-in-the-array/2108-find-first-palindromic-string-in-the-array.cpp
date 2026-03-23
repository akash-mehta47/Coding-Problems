class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(words[i].size()==1 ) return words[i];
            else{
                string revword=words[i];
                reverse(revword.begin(),revword.end());
                if(words[i]==revword) {
                    return words[i];
                }
            }
        }
        return "";
    }
};
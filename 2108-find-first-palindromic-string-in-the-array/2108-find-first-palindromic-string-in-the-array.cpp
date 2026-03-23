class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word:words){
            if(word.size()==1 ) return word;
            else{
                string revword=word;
                reverse(revword.begin(),revword.end());
                if(word==revword) {
                    return word;
                }
            }
        }
        return "";
    }
};
class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans = "";
        int x = part.size();
        for(char ch : s){
            ans+=ch;
            if(ans.size()>=x && ans.substr(ans.size()-x)==part){
                ans.erase(ans.size()-x);
            }
        }
        return ans;
    }
};
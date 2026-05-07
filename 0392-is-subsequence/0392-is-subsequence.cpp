class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char> ans;
        for(char ch:s){
            ans.push(ch);
        }
        for(int i=t.size()-1;i>=0;i--){
            if(ans.empty()) return true;
            if(ans.top()==t[i]){
                ans.pop();
            }
        }
        return ans.empty();
    }
};
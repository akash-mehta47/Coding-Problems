class Solution {
public:
    void star(string &ans){
        ans.erase(ans.size()-1,1);
    }

    void hash(string &ans){
        ans=ans+ans;
    }

    void modulo(string &ans){
        reverse(ans.begin(),ans.end());
    }

    string processStr(string s) {
        string ans = "";
        for(char ch:s){
            if(ch=='*'){
                if(!ans.empty()){
                    star(ans);
                }
            }
            else if(ch=='#'){
                if(!ans.empty()){
                    hash(ans);
                }
            }
            else if(ch=='%'){
                modulo(ans);
            }
            else{
                ans+=ch;
            }
        }
        return ans;
    }
};
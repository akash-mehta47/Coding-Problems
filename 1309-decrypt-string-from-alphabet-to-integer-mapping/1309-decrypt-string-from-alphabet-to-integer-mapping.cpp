class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int i=s.size()-1;
        while(i>=0){
            if(s[i]=='#'){
                ans+=(char)('a'+stoi(s.substr(i-2,2))-1);
                i-=3;
            }else{
                ans+=(char)('a'+(s[i]-'0')-1);
                i-=1;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
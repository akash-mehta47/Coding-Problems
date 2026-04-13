class Solution {
public:
    string reverseWords(string s) {
        string finalStr="";
        vector<string>words;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
                finalStr+=s[i];
            }else{
                if(finalStr.size()>0){
                    words.push_back(finalStr);
                }
                finalStr="";
            }
        }
        if(finalStr.size()!=0){
            words.push_back(finalStr);
        }
        string ans="";
        for(int i=words.size()-1;i>=0;i--){
            ans+=words[i];
            if(i>0){
                ans+=" ";
            }
        }
        for(string i:words){
            cout<<i;
        }
        return ans;
    }
};
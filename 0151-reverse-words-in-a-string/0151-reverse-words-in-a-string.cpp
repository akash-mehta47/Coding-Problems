class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        string currentWord="";
        vector<string> words;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(!currentWord.empty()){
                    words.push_back(currentWord);
                }
                currentWord="";
                continue;
            }else{
                currentWord+=s[i];
            }
        }
        if(!currentWord.empty()){
            words.push_back(currentWord);
        }
        for(int i=words.size()-1;i>=0;i--){
            if(i>0){
                ans+=words[i];
                ans+=" ";
                continue;
            }
            ans+=words[i];
        }
        return ans;
    }
};
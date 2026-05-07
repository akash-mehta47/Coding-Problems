class Solution {
public:

    void stringToVector(string &s,vector<string> &words){
        string currentWord="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                words.push_back(currentWord);
                currentWord="";
            }else{
                currentWord+=s[i];
            }
        }
        words.push_back(currentWord);
    }


    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringToVector(s,words);
        if(words.size()!=pattern.size()){
            return false;
        }
        unordered_map<char,string> mapping;
        unordered_set<string> mapped_words;

        for(int i=0;i<pattern.size();i++){
            if(mapping.find(pattern[i])==mapping.end()){
                if (mapped_words.find(words[i]) != mapped_words.end()) {
                return false;
            }
                mapping[pattern[i]]=words[i];
                mapped_words.insert(words[i]);
            }else{
                if(mapping[pattern[i]]!=words[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
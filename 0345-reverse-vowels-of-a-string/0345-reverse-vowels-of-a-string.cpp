class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiouAEIOU";
        string temp="";
        for(char c:s){
            if(vowels.find(c)!=string::npos){
                temp+=c;
            }
        }
        int i=temp.size()-1;
        int j=0;
        while(j<s.size()){
            if(vowels.find(s[j])!=string::npos){
                s[j]=temp[i];
                i--;
                j++;
                continue;
            }
            j++;
        }
        return s;
    }
};
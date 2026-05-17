class Solution {
public:
    int appendCharacters(string s, string t) {
        long i=0;
        long j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return t.size()-j;
    }
};
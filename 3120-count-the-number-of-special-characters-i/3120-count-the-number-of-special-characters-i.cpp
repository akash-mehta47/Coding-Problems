class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> freq(128,0);
        for(char ch:word){
            freq[ch-'A']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0 && freq[i+'a'-'A']>0){
                count++;
            }
        }
        return count;
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> uppercase(26,0),lowercase(26,0);
        for(int i =0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
                if(uppercase[word[i]-'A']==0){
                    uppercase[word[i]-'A']=i+1;
                }
            }else{
                lowercase[word[i]-'a']=i+1;
            }
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(lowercase[i] > 0 && uppercase[i] > 0 && uppercase[i] > lowercase[i]){
                count++;
            }
        }
        return count;
    }
};
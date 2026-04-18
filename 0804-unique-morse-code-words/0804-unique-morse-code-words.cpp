class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mapping={".-","-...","-.-.","-..",".","..-.","--.","....",
        "..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string,int> hash;
        for(int i=0;i<words.size();i++){
            string morse="";
            for(int j=0;j<words[i].size();j++){
                morse+=(mapping[words[i][j]-'a']);
            }
            hash[morse]++;
        }
        return hash.size();
      
    }    
};
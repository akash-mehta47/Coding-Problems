class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index=0;
        for(char i:word){
            if(ch==i){
                break;
            }
            index++;
        }
        if(index==word.length()) return word;
        else{
            reverse(word.begin(),word.begin()+index+1);
            return word;
        }
    }
};
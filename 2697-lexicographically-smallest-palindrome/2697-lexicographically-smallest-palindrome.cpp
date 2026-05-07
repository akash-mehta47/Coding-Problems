class Solution {
public:
    string makeSmallestPalindrome(string s) {
        for(int i=0;i<s.length()/2;i++){
            char current=s[i];
            char reverseCurrent=s[s.length()-i-1];
            if(current==reverseCurrent){
                continue;
            }else{
                if(current>reverseCurrent){
                    s[i]=reverseCurrent;
                }else{
                    s[s.length()-i-1]=current;
                }
            }
        }
        return s;
    }
};
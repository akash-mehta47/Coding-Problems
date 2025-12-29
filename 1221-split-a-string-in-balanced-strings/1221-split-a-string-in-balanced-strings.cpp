class Solution {
public:
    int balancedStringSplit(string s) {
        int bal=0;
        int count=0;
        if(s.size()==0){
            return 0;
        }
        for(char c:s){
            if(s[0]=='R'){
                if(c=='R'){
                    bal++;
                }
                else bal--;
            }
            if(s[0]=='L'){
                if(c=='L'){
                    bal++;
                }
                else bal--;
            }
            if(bal==0){
                count++;
            }
        }
        return count;
    }
};
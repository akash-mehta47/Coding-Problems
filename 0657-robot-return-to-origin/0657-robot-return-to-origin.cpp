class Solution {
public:
    bool judgeCircle(string moves) {
        int countH=0,countV=0;
        for(char c:moves){
            if(c=='U'){
                countV++;
            }else if(c=='D'){
                countV--;
            }else if(c=='R'){
                countH++;
            }else if(c=='L'){
                countH--;
            }
        }
        if(countV==0 && countH==0) return true;
        else return false;
    }
};
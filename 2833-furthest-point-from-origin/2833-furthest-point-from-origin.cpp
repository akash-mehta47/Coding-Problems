class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countL=0;
        int countR=0;
        int countE=0;
        for(char c:moves){
            if(c=='L') countL++;
            else if(c=='R') countR++;
            else countE++;
        }
        return (max(countL,countR)+countE)-min(countL,countR);
    }
};
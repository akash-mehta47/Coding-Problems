class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int c=strs[0].size();
        int r=strs.size()-1;
        int del=0;
        for(int col=0;col<c;col++){
            for(int row=0;row<r;row++){
                if(strs[row][col]>strs[row+1][col]){
                    del++;
                    break;
                }
            }
        }
        return del;

    }
};
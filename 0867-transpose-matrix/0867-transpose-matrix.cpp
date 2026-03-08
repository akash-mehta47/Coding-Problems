class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int trow=matrix[0].size();
        int tcolumn=matrix.size();
        vector<vector<int>> ans(trow,vector<int>(tcolumn,0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};
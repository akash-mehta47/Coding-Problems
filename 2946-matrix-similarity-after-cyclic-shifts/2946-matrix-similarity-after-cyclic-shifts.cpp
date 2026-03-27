class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> temp(mat.begin(),mat.end());

        while(k--){
            for(int i=0;i<m;i++){
                if(i%1){
                    int tVarO=mat[i][n-1];
                    for(int j=n-1;j>0;j--){
                        swap(mat[i][j],mat[i][j-1]);
                    }
                }else{
                    int tVarE=mat[i][0];
                    for(int j=1;j<n;j++){
                        swap(mat[i][j-1],mat[i][j]);
                    }
                }
            }
        }
        return mat==temp;
    }
};
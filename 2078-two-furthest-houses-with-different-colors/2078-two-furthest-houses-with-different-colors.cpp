class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxx=INT_MIN;
        int n=colors.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    if(abs(i-j)>maxx){
                        maxx=abs(i-j);
                    }
                }
            }
        }
        return maxx;
    }
};
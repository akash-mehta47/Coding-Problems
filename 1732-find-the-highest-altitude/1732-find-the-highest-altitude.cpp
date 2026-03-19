class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //using prefix sum
        long long sum=0;
        vector<int> prefixSum(gain.size()+1);
        long long maxx=prefixSum[0];

        for(int i=1;i<prefixSum.size();i++){
            prefixSum[i]=prefixSum[i-1]+gain[i-1];
        }
        for(int i:prefixSum){
            if(maxx<i){
                maxx=i;
            }
        }
        return maxx;
    }
};
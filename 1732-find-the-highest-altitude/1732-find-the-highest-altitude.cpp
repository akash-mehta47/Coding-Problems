class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        long long sum = 0;
        long long maxx=0;
        for(int i:gain){
            sum+=i;
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int tempLand = landStartTime[i]+landDuration[i];
                int finish1 = max(tempLand, waterStartTime[j]) + waterDuration[j];

                int tempWater = waterStartTime[j]+waterDuration[j];
                int finish2 = max(tempWater, landStartTime[i]) + landDuration[i];

                ans= min({ans,finish1,finish2});
            }
        }
        return ans;
    }
};
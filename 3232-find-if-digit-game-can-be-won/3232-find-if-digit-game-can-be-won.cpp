class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        long long singled=0;
        long long doubled=0;
        for(int n:nums){
            if(n>9){
                doubled+=n;
            }else{
                singled+=n;
            }
        }
        return abs(singled-doubled);
    }
};
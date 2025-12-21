class Solution {
public:
    int mirrorDistance(int n) {
        string temp=to_string(n);
        reverse(temp.begin(),temp.end());
        int temp1=stoi(temp);
        return abs(temp1-n);
    }
};
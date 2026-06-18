class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hrPos=(hour%12)*30.0 + (minutes*0.5);
        double minPos=minutes*6.0;

        double diff = abs(hrPos-minPos);
        return min(diff,360.0-diff);
    }
};
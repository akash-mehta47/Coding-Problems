class Solution {
public:
    bool validDigit(int n, int x) {
        string num = to_string(n);
        char target = x+'0';
        for(int i=0;i<num.size();i++){
            if(target==num[i]){
                if(i==0) return false;
                return true;
            }
        }
        return false;
    }
};
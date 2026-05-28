class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sign = 1;
        bool started = false;
        for(int i=0; i<s.size(); i++){
            if(!started && s[i]==' ') continue;
            if(!started && (s[i]== '-' || s[i]=='+')){
                sign = (s[i]=='-') ? -1:1;
                started = true;
                continue;
            }

            if(isdigit(s[i])){
                started=true;
                
                ans=(ans*10)+(s[i]-'0');

                if(ans*sign > INT_MAX) return INT_MAX;
                if(ans*sign < INT_MIN) return INT_MIN;
            }else{
                break;
            }
        }
        return ans*sign;
    }
};
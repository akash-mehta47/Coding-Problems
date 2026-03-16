class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.size() < 8) return false;
        bool upper=false,lower=false,digit=false,specialc=false;
        string special="!@#$%^&*()-+";
        
        for(int i = 0; i<=password.size();i++){
            char x = password[i];
            if(i > 0 && x==password[i-1]) return false;
            if('a'<=x && x<= 'z') lower=true;
            else if('A'<=x && x<= 'Z') upper=true;
            else if('0'<=x && x<= '9') digit=true;
            else if(special.find(x)!=string::npos) specialc=true;
        }
        
        return upper&&lower&&digit&&specialc;
    }
};
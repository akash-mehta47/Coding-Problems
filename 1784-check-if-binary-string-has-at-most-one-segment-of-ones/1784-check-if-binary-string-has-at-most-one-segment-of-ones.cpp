class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s[0]=='0'){
            return false;
        }
        string temp="01";
        for(int i=0;i<s.size()-1;i++){
            if(s.substr(i,2)==temp){
                return false;
            };
        }
        return true;
    }
};
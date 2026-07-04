class Solution {
public:
    void longestCheck(int left,int right, int &maxLength,int &start,string s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            int length=right-left+1;
            if(length>maxLength){
                start=left;
                maxLength=length;
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        int start=0;
        int maxLength=1;
        for(int i=0;i<s.size();i++){
            longestCheck(i,i,maxLength,start,s);
            longestCheck(i,i+1,maxLength,start,s);
        }
        return s.substr(start,maxLength);
    }
};
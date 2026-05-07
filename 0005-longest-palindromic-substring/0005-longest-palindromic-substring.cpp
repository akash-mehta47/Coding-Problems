class Solution {
public:

    void longestSubString(int left, int right, int& maxLength, int& start, string s){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            int currentLength= right-left+1;
            if(currentLength>maxLength){
                start=left;
                maxLength=currentLength;
            }
            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {
        int size=1;
        int start=0;
        for(int i=0;i<s.size();i++){
            longestSubString(i,i,size,start,s);
            longestSubString(i,i+1,size,start,s);
        }
        return s.substr(start,size);
    }
};
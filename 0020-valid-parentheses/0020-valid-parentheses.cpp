class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> mpp={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(auto c:s){
            if(mpp.find(c)==mpp.end()){
                st.push(c);
            } else if(!st.empty() && mpp[c]==st.top()){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};
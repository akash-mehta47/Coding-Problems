class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool flag=true;
        char first='a';
        while(first<='z'){
            if(sentence.find(first)==string::npos){
                flag=false;
            }
            first++;
        }
        return flag;
    }
};
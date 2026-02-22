class Solution {
public:
    string maximumXor(string s, string t) {
        int count0=0,count1=0;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(t[i]=='0'){
                count0++;
            }else count1++;
        }
        string maxi="";
        for(int i=0;i<n;i++){
            if(s[i]=='1' && count0>0){
                maxi+='0';
                count0--;
            }else if(s[i]=='0' && count1>0){
                maxi+='1';
                count1--;
            }
            if(count0==0){
                maxi+='1';
                count1--;
            }else if(count1==0){
                maxi+='0';
                count0--;
            }
        }
        string result="";
        for(int i=0;i<n;i++){
            if(s[i]=='0' && maxi[i]=='0' || s[i]=='1' && maxi[i]=='1'){
                result+='0';
            }else if(s[i]=='1' && maxi[i]=='0' || s[i]=='0' && maxi[i]=='1' ){
                result+='1';
            }
        }
        return result;
    }
};
class Solution {
public:
    int binaryGap(int n) {
        vector<long long> binaryNum;
        if(n==0){
            binaryNum.push_back(0);
        }else{
            while(n>0){
                int bit=n%2;
                binaryNum.push_back(bit);
                n/=2;
            }
        }
        reverse(binaryNum.begin(),binaryNum.end());
        int last=-1;
        int current=0;
        int maxi=0;
        for(int i=0;i<binaryNum.size();i++){
            if(binaryNum[i]==1){
                current=i;
                if(last!=-1){
                    maxi=max(maxi,current-last);
                }
                last=current;
            }
        }
        return maxi;
    }
};
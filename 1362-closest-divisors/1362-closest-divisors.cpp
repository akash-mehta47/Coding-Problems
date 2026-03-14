class Solution {
public:
    vector<int> closestDivisors(int num) {
        int first=num+1;
        int second=num+2;

        int minn1=INT_MAX;
        int minn2=INT_MAX;

        pair<int,int> pair1;
        pair<int,int> pair2;

        for(int i=1;i*i<=first;i++){
            if(first%i==0){
                int temp1=i;
                int temp2=first/i;
                if(minn1>abs(temp1-temp2)){
                    minn1=abs(temp1-temp2);
                    pair1.first=temp1;
                    pair1.second=temp2;
                }
            }
        }
        for(int i=1;i*i<=second;i++){
            if(second%i==0){
                int temp1=i;
                int temp2=second/i;
                if(minn2>abs(temp1-temp2)){
                    minn2=abs(temp1-temp2);
                    pair2.first=temp1;
                    pair2.second=temp2;
                }
            }
        }
        if(minn1<minn2){
            return {pair1.first,pair1.second};
        }else{
            return {pair2.first,pair2.second};
        }
    }
};
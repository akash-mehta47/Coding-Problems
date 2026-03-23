class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int num=i;
            int temp1=num;
            bool flag=true;
            while(temp1>0){
                int temp2=temp1%10;
                temp1/=10;
                if(temp2!=0){
                    if(num%temp2!=0){
                        flag=false;
                    }
                }else{
                    flag=false;
                }
            }
            if(flag){
                ans.push_back(i);
            }
        }
        return ans;

    }
};
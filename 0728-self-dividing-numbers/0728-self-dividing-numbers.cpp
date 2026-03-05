class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int num=i;
            int temp=num;
            bool flag=true;
            while(temp>0){
                int dig=temp%10;
                temp/=10;
                if(dig!=0){
                    if(num%dig!=0){
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
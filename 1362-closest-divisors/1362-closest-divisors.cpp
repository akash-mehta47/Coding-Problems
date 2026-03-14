class Solution {
public:
    vector<int> closestDivisors(int num) {
        int num1=num+1;
        int num2=num+2;
        int diff=INT_MAX;

        vector<int> ans(2);

        for(int i=sqrt(num1);i>0;i--){
            if(num1%i==0){
                diff=abs(num1/i-i);
                ans[0]=i;
                ans[1]=num1/i;
                break;
            }
        }

        for(int i=sqrt(num2);i>0;i--){
            if(num2%i==0){
                if(abs(num2/i-i)<diff){
                    ans[0]=i;
                    ans[1]=num2/i;
                }
                break;
            }
        }
        return ans;

    }
};
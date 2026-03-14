class Solution {
public:
    vector<int> closestDivisors(int num) {
        int num1=num+1;
        int num2=num+2;
        int diff=INT_MAX;

        vector<int> ans;

        for(int i=sqrt(num1);i>0;i--){
            if(num1%i==0){
                diff=num1/i-i;
                ans={i,num1/i};
                break;
            }
        }

        for(int i=sqrt(num2);i>0;i--){
            if(num2%i==0){
                if((num2/i-i)<diff){
                    return {i,num2/i};
                }
                break;
            }
        }
        return ans;

    }
};
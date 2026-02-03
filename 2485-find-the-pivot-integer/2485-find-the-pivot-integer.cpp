class Solution {
public:
    int pivotInteger(int n) {
        long long sum=(n*(n+1))/2;
        int temp=0;
        for(int i=1;i<=n;i++){
            sum-=i;
            if(temp==sum){
                return i;
            }
            temp+=i;
        }
        return -1;
    }
};
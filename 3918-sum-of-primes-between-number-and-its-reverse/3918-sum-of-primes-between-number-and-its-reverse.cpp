class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r=0;
        int original=n;
        while(original>0){
            int temp=original%10;
            r=r*10+temp;
            original/=10;
        }
        long long ans=0;
        for(int i=min(r,n);i<=max(r,n);i++){
            if(i<2) continue;
            int count=0;
            for(int j=1;j*j<=i;j++){
                if(i%j==0){
                    count++;
                    if(j*j!=i) count++;
                }
            }
            if(count==2){
                ans+=i;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        unsigned int mask = ~0;
        unsigned int temp = n;
        while(temp>0){
            temp>>=1;
            mask<<=1;
        }
        return n ^ (~ mask );
    }
};
class Solution {
public:
    int findComplement(int num) {
        unsigned int mask = ~0;
        unsigned int temp = num;
        while(temp>0){
            temp>>=1;
            mask<<=1;
        }
        return num ^ (~ mask );
    }
};
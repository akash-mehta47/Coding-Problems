class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int temp=num%10;
            int temp2=num/10;
            num=temp+temp2;
        }
        return num;
    }
};
class Solution {
public:
    int maxProduct(int n) {
        int first = -1;
        int second = -1;

        while(n>0){
            int current = n%10;
            n/=10;
            
            if(current>=first){
                second=first;
                first=current;
            } else if(current>second){
                second=current;
            }
            
        }
        return first*second;
    }
};
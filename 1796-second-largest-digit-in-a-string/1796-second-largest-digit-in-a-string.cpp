class Solution {
public:
    int secondHighest(string s) {
        int largest=-1;
        int secondLargest=-1;
        for(char ch:s){
            if(isdigit(ch)){
                int temp=(ch-'0');
                if(temp>largest){
                    secondLargest=largest;
                    largest=temp;
                }else if(temp>secondLargest && temp<largest){
                    secondLargest=temp;
                }
            }
        }
        return secondLargest;
    }
};
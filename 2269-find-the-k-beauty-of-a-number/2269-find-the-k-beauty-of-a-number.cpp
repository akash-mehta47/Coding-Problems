class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string Snum=to_string(num);
        int count=0;
        for(int i=0;i<=Snum.size()-k;i++){
            int temp=stoi(Snum.substr(i,k));
            if(temp!=0 && num%temp==0) count++;
        }
        return count;
    }
};
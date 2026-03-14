class Solution {
public:

    vector<int> findClosest(int target){
        for(int i=sqrt(target);i>0;i--){
            if(target%i==0){
                return {i,target/i};
            }
        }
        return {};
    }
    vector<int> closestDivisors(int num) {
        vector<int> pair1= findClosest(num+1);
        vector<int> pair2= findClosest(num+2);

        if(abs(pair1[0]-pair1[1])<abs(pair2[0]-pair2[1])){
            return pair1;
        }else{
            return pair2;
        }
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxx=-1;
        int curr;
        for(int i=arr.size()-1;i>=0;i--){
            curr=maxx;
            if(arr[i]>maxx){
                maxx=arr[i];
            }
            arr[i]=curr;
        }
        return arr;
    }
};
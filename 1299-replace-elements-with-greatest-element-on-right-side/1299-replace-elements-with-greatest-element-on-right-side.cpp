class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        int temp=-1;
        int maxx=-1;
        for(int i=arr.size()-1;i>=0;i--){
            temp=arr[i]; 
            ans[i]=maxx;
            if(maxx<temp){
                maxx=temp;
            }
        }
        return ans;
    }
};
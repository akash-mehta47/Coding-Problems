class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size()-1;i++){
            int temp=*max_element(arr.begin()+i+1,arr.end());
            ans[i]=temp; 
        }
        ans[arr.size()-1]=-1;
        return ans;
    }
};
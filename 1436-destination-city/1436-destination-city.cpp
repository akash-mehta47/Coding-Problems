class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> hash;
        for(auto i:paths){
            for(auto j:i){
                hash[j]++;
            }
        }
        string cityA="";
        string cityB="";
        for(const auto&[key,value]:hash){
            if(value==1 && cityA.size()==0){
                cityA=key;
            }else if(value==1){
                cityB=key;
            }
        }
        for(int i=0;i<paths.size();i++){
            if(paths[i][0]==cityA){
                return cityB;
            }
        }
        return cityA;
    }
};
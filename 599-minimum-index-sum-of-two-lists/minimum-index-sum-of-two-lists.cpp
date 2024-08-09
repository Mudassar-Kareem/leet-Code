class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        int li=INT_MAX;
        vector<string> res;
        vector<vector<int>> ind;
        vector<string> ans;
        for(int i=0;i<l1.size();i++){
            for(int j=0;j<l2.size();j++){
                if(l1[i]==l2[j] && i+j<=li){
                    res.push_back(l1[i]);
                    ind.push_back({i,j});

                    li=i+j;
                    break;

                }
               
            }
        }
        
        for(int i=0;i<ind.size();i++){
            for(int j=0;j<ind[i].size()-1;j++){
                if(ind[i][j]+ind[i][j+1]==li){
                    ans.push_back(res[i]);
                }
            }
        }
  return ans;  }
};
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mymap;
        vector<int>ans;
        for(int i=0; i<nums2.size(); i++){
            mymap[nums2[i]] =i;
        }
        for(int i=0; i<nums1.size(); i++){
            int index= mymap[nums1[i]];
            int res =-1;
            for(int j=index+1; j<nums2.size(); j++){
                if(nums2[j] > nums1[i]){
                    res= nums2[j];
                    break;
                };
            };
            ans.push_back(res);
        }
        return ans;
    }
};
class Solution {
public:
    int balancedStringSplit(string s) {
        int R=0;
        int L=0;
        int count =0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'R'){
                R++;
            }
            else{
                L++;
            };
            if(R==L){
                count ++;
            }
        }
        return count;
    }
};
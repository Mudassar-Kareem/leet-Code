class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(const std::string& v:operations){
            if(v == "++X" || v == "X++"){
                X++;
            }else if(v == "--X" || v == "X--"){
                X--;
            }
        }
        return X;
    }
};
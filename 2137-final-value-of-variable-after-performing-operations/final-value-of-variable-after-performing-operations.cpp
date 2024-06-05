class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(const std::string& o: operations ){
            if( o== "X++" ||o == "++X"){
                X++;
            }else if(o == "X--" ||o == "--X"){
                X--;
            };
        }
         return X;
        
    }
};
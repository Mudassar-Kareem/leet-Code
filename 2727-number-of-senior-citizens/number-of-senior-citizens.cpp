class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(const string& details : details){
            int age = stoi(details.substr(11,2));
            if(age>60){
                count ++;
            }
        }
        return count++;
    }
};
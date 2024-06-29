class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cS = 0;
        int sS =0;
        for(int choice : students){
            if(choice ==0){
                cS++;
            } else {
                sS++;
            }
        };
        for(int sandwich : sandwiches){
            if(sandwich ==0 && cS == 0){
                return sS;
            }
            if(sandwich ==1 && sS ==0){
                return cS;
            }
            if(sandwich ==0){
                cS--;
            } else{
                sS--;
            }
        }
        return 0;
    }
};
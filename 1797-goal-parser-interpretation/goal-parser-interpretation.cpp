class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=1;i<=command.size();i++)
        {
            if(command[i-1]=='(' && command[i]==')')
            {
                s.push_back('o');
                i++;
            }
            if(command[i-1]!='(' && command[i-1]!=')')
            s.push_back(command[i-1]);
        
        }
        return s;
    }
};
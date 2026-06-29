class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(m!=n){
            return false;
        }
        if((s+s).find(goal)!=string::npos){
            return true;
        }
        return false;
    }
};
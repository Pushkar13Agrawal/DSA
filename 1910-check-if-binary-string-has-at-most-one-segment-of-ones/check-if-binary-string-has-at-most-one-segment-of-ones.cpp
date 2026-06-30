class Solution {
public:
    bool checkOnesSegment(string s) {
        int one=0;
        int zero=0;
        for(int i=0;i<s.length();i++){
           if(s[i]=='1'){
            one=1;
           }
          else if(s[i]=='0')zero=1;
           
           if(one==1 && zero==1 && s[i]=='1'){
            return false;
           }
        }
        return true;
    }
};
class Solution {
public:
    bool checkString(string s) {
        bool a=true;
        bool b=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b'){
                b=true;
            }
            if(b==true && s[i]=='a'){
                a=false;
            }
        }
        return a;
    }
};
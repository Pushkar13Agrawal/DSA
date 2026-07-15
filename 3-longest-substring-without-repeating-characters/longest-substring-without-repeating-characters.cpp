class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0)return 0;
        if (s.size()==1)return 1;
        int i=0,j=0;
        int len=0;
        map<char,int>mpp;
        while(j<s.size()){
            if(mpp.find(s[j])==mpp.end()){
                mpp[s[j]]=1;
                len=max(len,j-i+1);
                j++;
            }
            else if (mpp.find(s[j])!=mpp.end()){
                mpp.erase(s[i]);
                i++;
            }
        }
        return len;
    }
};
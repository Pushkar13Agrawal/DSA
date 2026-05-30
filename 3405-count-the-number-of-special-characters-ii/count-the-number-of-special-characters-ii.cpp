class Solution {
public:
    int numberOfSpecialChars(string word) {
         vector<int>mp1(26,-1); //(last occurence of lower letter)
         vector<int>mp2(26,-1); //(first occurence of capital letter)
         for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(islower(ch)){
                mp1[ch-'a']=i;
            }
            else{
                int idx=ch-'A';

                if(mp2[idx]==-1){
                    mp2[idx]=i;
                }
            }
         }
         int cnt=0;
         for(int i=0;i<26;i++){
            if(mp1[i]!=-1 && mp2[i]!=-1 && mp1[i]<mp2[i]){
                cnt++;
            }
         }
         return cnt;
    }
};
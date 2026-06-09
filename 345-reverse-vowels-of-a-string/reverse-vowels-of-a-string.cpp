class Solution {
public:
bool isVowel(char s){
if(s=='a'|| s=='e'|| s=='i'|| s=='o'|| s=='u'|| 
s=='A'|| s=='E'|| s=='I'|| s=='O'|| s=='U'){return true;}
return false;
}
    string reverseVowels(string s) {
         int left=0;
         int right=s.length();
         while(left<right){

            if(!isVowel(s[left])){
                left++;
            }
            else if(!isVowel(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
         }
         return s;
    }
};
class Solution {
public:
    int countDigits(int num) {
        int OldNum=num;
        int cnt=0;
      while(num>0){
        int x=num%10;
        if(OldNum%x==0){
            cnt++;
        }
        num=num/10;
      }  
      return cnt;
    }
};
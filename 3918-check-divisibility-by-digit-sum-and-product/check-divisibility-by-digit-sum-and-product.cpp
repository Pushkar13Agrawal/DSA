class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int y=n;
        while(n>0){
            int x=n%10;
            sum=sum+x;
            product=product*x;
            n=n/10;
        }

        if(y%(sum+product)==0){
            return true;
        }


        return false;
    }
};
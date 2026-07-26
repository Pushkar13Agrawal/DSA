class Solution {
public:
    int maxProduct(int n) {
        int sl=0;
        int fl=0;
        while(n!=0){
            if(n%10>=fl){
                sl=fl;
                fl=n%10;
            }
            else if(n%10>sl && n%10<fl){
               sl= n%10;
            }
           n= n/10;
        }
        return sl*fl;
    }
};
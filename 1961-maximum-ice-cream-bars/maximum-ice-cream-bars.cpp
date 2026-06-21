class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0;
        int cnt=0;
      for(int i=0;i<costs.size();i++){
       
        if(sum<coins && costs[i]<coins){
            sum+=costs[i];
            if(sum<=coins)cnt++;
            
        }
        else{
            break;
        }
      }
      return cnt;
    }
};
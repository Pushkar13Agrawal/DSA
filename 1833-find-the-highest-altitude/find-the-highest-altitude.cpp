class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=INT_MIN;
        int ans =0;
        for(int i=0;i<gain.size();i++){
            ans+=gain[i];
            sum=max(sum,ans);
        }

        if(sum<0) return 0;
        return sum;
    }
};
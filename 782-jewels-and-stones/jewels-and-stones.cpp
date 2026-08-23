class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> mpp;
        for (int i = 0; i < stones.size(); i++) {
            mpp[stones[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < jewels.size(); i++) {
            if (mpp.find(jewels[i]) != mpp.end()) {
                ans = ans + mpp[jewels[i]];
            }
        }
        return ans;
    }
};
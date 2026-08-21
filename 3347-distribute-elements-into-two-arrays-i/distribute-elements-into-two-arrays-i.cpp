class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>num1;
        vector<int>num2;

        num1.push_back(nums[0]);
        num2.push_back(nums[1]);

        int n = nums.size();
        for (int i = 2; i < n; i++) {
      
        if ( num1.back() > num2.back()) {
            num1.push_back(nums[i]);
        } else {
            num2.push_back(nums[i]);
        }
    }
    int j = num2.size();
    int k = num1.size();
    num1.resize(n);
    for (int i = 0; i < j; i++) {
        num1[k + i] = num2[i];
    }
    return num1;
}
}
;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        set<int>st;
        for(auto it:freq){
            st.insert(it.second);
        }
         return freq.size()==st.size();
    }
};
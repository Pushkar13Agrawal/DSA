class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string l=to_string(low);
          string h=to_string(high);
          string k="123456789";
          vector<int>ans;
          for(int i=l.length();i<=h.length();i++){
            for(int j=0;j<=9-i;j++){
                string num=k.substr(j,i);
                int nums=stoi(num);
                if(nums<=high && nums>=low){ans.push_back(nums);}
            }
          }
          return ans;
    }
};
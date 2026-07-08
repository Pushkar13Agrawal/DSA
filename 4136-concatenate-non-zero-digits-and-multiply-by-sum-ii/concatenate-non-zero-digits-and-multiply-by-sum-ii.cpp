class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.length();
     
        vector<int> digSum;
        int sum = 0;
         long long MOD = 1000000007;
        for (int i = 0; i < n; i++) {
            sum = sum + s[i] - '0';
            digSum.push_back(sum);
        }

        vector<long long> num(n, 0);
        
        num[0] = s[0] - '0';
      
        for (int i = 1; i < n; i++) {
            if (s[i] == '0') {
                num[i] = (num[i - 1]);
               
            } else {
                 num[i] = ((num[i-1] * 10) + (s[i] - '0')) % MOD;
            
            }
        }

        vector<long long> nondigit(n, 0);
        int cnt = 0; 
        if (s[0] == '0') { nondigit[0] = 0; }
        else if (s[0] != '0') {
            nondigit[0] = 1;
            cnt = 1;
        }

        for (int i = 1; i < n; i++) {
            if (s[i] != '0') {
                cnt++;
                nondigit[i] = cnt;
            } else {
                nondigit[i] = nondigit[i - 1];
            }
        }

        vector<long long> power10(n + 1, 0);
        power10[0] = 1;
        for (int i = 1; i <=n; i++) {
            power10[i] = (power10[i - 1] * 10) % MOD;
        }
        int q=queries.size();
        vector<int>finalans(q);
        for(int i=0;i<q;i++){
            int right=queries[i][1];
            int left=queries[i][0];
            long long k=0;
         long long x=0;
         long long sum=0;
         if(left==0){
            sum= (digSum[right])%MOD;
             x=(num[right])%MOD;
k=nondigit[right];
         }
         else{
            sum= (digSum[right]-digSum[left-1]) %MOD;
           k= nondigit[right]-nondigit[left-1];
          x = (num[right] - (num[left - 1] * power10[k]) % MOD + MOD) % MOD;
         }
        finalans[i] = (x * sum) % MOD;
        }
        return finalans;
    }
};
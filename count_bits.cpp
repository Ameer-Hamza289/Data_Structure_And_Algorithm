class Solution {
public:
    vector<int> countBits(int n) {
        // vector<int> res;
        // for(int i=0; i<=n;i++){
        //     int num=i, sum=0;
        //     while(num){
        //         sum+=num%2;
        //         num=num/2;
        //     }
        //     res.push_back(sum);
        // }
        // return res;
        vector<int> dp(n+1,-1);
        dp[0]=0;
        for(int i=1;i<=n; i++){
            int j=i/2;
            if(i%2) dp[i]=dp[j]+1;
            else dp[i]=dp[j];
        }
        return dp;
    }
};
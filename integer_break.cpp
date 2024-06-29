#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        vector <int> dp(60,1);
        for(int i=1; i<=n;i++){
            for(int j=1; j<=1;j++){
                dp[i]=max(dp[i],dp[i-j]*j);
            }
        }
        return n<4?n-1:dp[n];
    }
};
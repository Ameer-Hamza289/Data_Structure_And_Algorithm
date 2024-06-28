class Solution {
    bool helper(string s, int si, unordered_map<string, int> mpp, vector<int>& dp){
        if(si == s.size()){
            return true;
        }
        if(dp[si]!=-1){
            return dp[si];
        }
        for(int i=si; i<s.size(); i++){
            if(mpp.count(s.substr(si, i-si+1))){
                if(helper(s, i+1, mpp, dp)){
                    dp[i+1] = 1;
                    return true;
                }
            }
        }
        dp[si] = 0;
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, int> mpp;
        vector<int> dp(s.size()+1, -1);
        for(auto it: wordDict){
            mpp[it]++;
        }
        return helper(s, 0, mpp, dp);
    }
};
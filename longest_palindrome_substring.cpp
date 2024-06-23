#include <iostream>
#include <string>
using namespace std;

// class Solution {
// public:
//     string longestPalindrome(const string& s) {
//         if (s.size() == 1) {
//             return {s[0]};
//         } else if (s.size() == 2) {
//             if (s[0] == s[1]) {
//                 return s;
//             }

//             return {s[0]};
//         }

//         int maxL = 0, maxR = 0;

//         for (int i = 0; i+1 < s.size(); ++i) {
//             int l = i, r = i+1;

//             if (s[i] == s[r]) {
//                 while(l >= 0 && r < s.size() && s[l] == s[r]){
//                     --l; ++r;
//                 }

//                 l++; r--;

//                 if (maxR - maxL < r - l) {
//                     maxL = l; maxR = r;
//                 }
//             }

//             if (i != 0) {
//                 l = i - 1;
//                 r = i + 1;

//                 while (l >= 0 && r < s.size() && s[l] == s[r]) {
//                     --l;
//                     ++r;
//                 }

//                 l++;
//                 r--;

//                 if (maxR - maxL < r - l) {
//                     maxL = l;
//                     maxR = r;
//                 }
//             }
//         }

//         return s.substr(maxL, maxR - maxL + 1);
//     }
// };



// Manacher's algorithm
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return s;
        int start=0;
        int end=0;
        int maxLen=1;
        string maxStr=s.substr(0,1);
        s="#"+regex_replace(s,regex(""),"#")+"#";
        vector<int> dp(s.size(),0);
        int center=0;
        int right=0;
        for(int i=0;i<s.size();++i){
            if(i<right){
                dp[i]=min(right-i,dp[2*center-i]);
            }            
            while(i-dp[i]-1 >=0 && dp[i]+1 < s.size() && s[i-dp[i]-1]==s[i+dp[i]+1]){
                dp[i]++;
            }
            if(i+dp[i] > right){
                center=i;
                right=i+dp[i];
            }
            if(dp[i]>maxLen){
                maxLen=dp[i];
                maxStr=s.substr(i-dp[i],2*dp[i]+1);
                maxStr.erase(remove(maxStr.begin(),maxStr.end(),'#'),maxStr.end());
            }
        }
        return maxStr;
    }
};
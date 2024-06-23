#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(const string& s) {
        if (s.size() == 1) {
            return {s[0]};
        } else if (s.size() == 2) {
            if (s[0] == s[1]) {
                return s;
            }

            return {s[0]};
        }

        int maxL = 0, maxR = 0;

        for (int i = 0; i+1 < s.size(); ++i) {
            int l = i, r = i+1;

            if (s[i] == s[r]) {
                while(l >= 0 && r < s.size() && s[l] == s[r]){
                    --l; ++r;
                }

                l++; r--;

                if (maxR - maxL < r - l) {
                    maxL = l; maxR = r;
                }
            }

            if (i != 0) {
                l = i - 1;
                r = i + 1;

                while (l >= 0 && r < s.size() && s[l] == s[r]) {
                    --l;
                    ++r;
                }

                l++;
                r--;

                if (maxR - maxL < r - l) {
                    maxL = l;
                    maxR = r;
                }
            }
        }

        return s.substr(maxL, maxR - maxL + 1);
    }
};
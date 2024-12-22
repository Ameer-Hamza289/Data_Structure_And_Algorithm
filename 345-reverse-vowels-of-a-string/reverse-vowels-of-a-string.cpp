class Solution {
public:
    bool isVowel(char str) {
        bool is = false;
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' ||
            str == 'u' || str == 'A' || str == 'E' || str == 'I' ||
            str == 'O' || str == 'U') {
            is = true;
        }
        return is;
    }
    string reverseVowels(string s) {
        string res = s;

        int i = 0;
        int j = res.size() - 1;
        while (i < j) {
            if (isVowel(res[i]) && isVowel(res[j])) {
                char temp = res[i];
                res[i] = res[j];
                res[j] = temp;
                i++;
                j--;
            }
            if (!isVowel(res[i])) {
                i++;
            }
            if (!isVowel(res[j])) {
                j--;
            }
        }

        return res;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()) return "";
        string prefix=strs[0];
        for(auto str:strs){
            while(str.find(prefix)!=0){
                prefix=prefix.substr(0,prefix.length()-1);
                if(!prefix.length()) return "";
            }
        }
        return prefix;
    }
};
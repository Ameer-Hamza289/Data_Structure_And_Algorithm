class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool check=true;
        // if(s.size()!=t.size()) return false;
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        for(int i=0;i<s.size() && check;i++){
            if((mp1.count(s[i]) || mp2.count(t[i])) && (mp1[s[i]] !=t[i] || mp2[t[i]] !=s[i])){
                check=false;
                break;
            }else{
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
        }
        // for(int i=0;i<s.size();i++){
        //     if(mp.find(s[i])==mp.end()){
        //     mp[s[i]]=t[i];

        //     }
        // }
        // for(int j=0;j<t.size();j++){

        // }
        
        return check;
    }
};
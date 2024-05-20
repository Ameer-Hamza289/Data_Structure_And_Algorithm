class Solution {
public:
    int strStr(string haystack, string needle) {
        // int count=0;
        // string check=haystack.substr(0,needle.size());
        int loc=haystack.find(needle,0);
        // for(int i=0;i<needle.size();i++){
        //     if(count==-1) break;
        //     for(int j=0;j<=i;j++){
        //         if(needle[i]==haystack[j]){
        //             count++;
        //         }else{
        //             count=-1;
        //             break;
        //         }
        //     }
        // }
        return loc != string::npos?loc:-1;
    }
};
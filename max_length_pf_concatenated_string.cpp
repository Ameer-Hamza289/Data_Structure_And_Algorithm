//Maximum Length of a Concatenated String with Unique Characters

class Solution {
public:

    bool uniqueChar(string& str){
        int store=0;
        for(int i=0;i<str.size();i++){
            int idxBit= str[i]-'a';
            if((store & (1<<idxBit))>0){
                return false;
            }
            store= store | (1<<idxBit);
        }
        return true;
    }
    int ans=0;
    void helper(vector<string>& arr, int idx,vector<string>& temp){
       //  ["ui", "qe"]
        string str="";
        for(int i=0;i<temp.size();i++){
            str+= temp[i];
        }
        if(uniqueChar(str)){
            int l=str.size();
            ans=max(ans, l);
        }


        for(int i=idx;i<arr.size();i++){
            temp.push_back(arr[i]);
            if(uniqueChar(arr[i]))
                helper(arr,i+1,temp);
            temp.pop_back();
        }

    }
    int maxLength(vector<string>& arr) {
        vector<string> temp;
        helper(arr, 0, temp);
        return ans;
        
    }
};
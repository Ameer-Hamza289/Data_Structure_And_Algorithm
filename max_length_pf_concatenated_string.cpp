class Solution {
private:
    int ans=0;
    bool uniqueChar(string& str){
        // sort(str.begin(),str.end());
        // for(int i=1;i<str.size();i++){
        //     if(str[i]==str[i-1]){
        //         return false;
        //     }
        // }
        int store=0;
        for(int i=0;i<str.size();i++){
            int idxBit=str[i]-'a';
            if((store && (1<<idxBit))>0){
                return false;
            }
            store=store | (1<<idxBit);
        }
        return true;
    }
public:
    void helper(vector<string>&arr,int idx, vector<string>& temp){
        string str="";
        for(int i=0;i<temp.size();i++){
            str+=temp[i];
        }
        if(uniqueChar(str)){
            int l=str.size();
            ans=max(ans,l);
        }
        for(int i=idx; i< arr.size();i++){
            temp.push_back(arr[i]);
            if(uniqueChar(arr[i])){
                helper(arr,i+1,temp);   
            }
            temp.pop_back();
        }
    }
    int maxLength(vector<string>& arr) {
        vector<string> temp;
        helper(arr,0,temp);
        return ans;
    }
};
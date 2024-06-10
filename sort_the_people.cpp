// Sort the People
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> str;
        int n=heights.size();
        unordered_map<int,string> mp;
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<n;i++){
            str.push_back(mp[heights[i]]);
        }
        return str;

    }
};
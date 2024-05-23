class Solution {
public:
    int search(vector<int>& nums, int target) {
        // unordered_map<int,int> mp;
        // for(int i=0; i<nums.size();i++){
        //     mp[nums[i]]=i;
        // }
        // return mp.find(target)==mp.end()?-1:mp[target];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
        }
        return -1;
    }
};
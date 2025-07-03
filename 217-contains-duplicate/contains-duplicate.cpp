class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicate_checker = {};
        bool hasDuplicate = false;
        for (int i = 0; i < nums.size(); i++) {
            if (duplicate_checker.find(nums[i]) != duplicate_checker.end()) {
                hasDuplicate = true;
                break;
            }
            duplicate_checker.insert(nums[i]);
        }

        // for(int i = 0; i < nums.size(); i++){
        //     for (int j=i+1; j< nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             hasDuplicate = true;
        //             break;
        //         }
        //     }
        //     if(hasDuplicate){
        //         break;
        //     }
        // }
        return hasDuplicate;
    }
};
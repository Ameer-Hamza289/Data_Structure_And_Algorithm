// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
class Solution {
public:
    // bool containsDuplicate(vector<int>& nums) {
    //     bool duplicate=false;
    //     int i=0;
    //     for(auto number:nums){
    //         if(duplicate) break;
    //         int index=0;
    //         int count=0;
    //         while(index<nums.size() && !duplicate){
    //             if(number==nums[index]) {
    //                 count++;
    //             }
    //             if(count>1){
    //                 duplicate=true;
    //                 break;
    //             }
    //             index++;
    //         }
    //         i++;
    //         count=0;
    //     }
    //     return duplicate;
    // }
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) return true;
            }
        return false;
    }
};


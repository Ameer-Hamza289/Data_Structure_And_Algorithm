class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int countLessThanTarget=0, TargetTotalCount=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<target) countLessThanTarget++;
            if(nums[i]==target ) TargetTotalCount++;
        }
        vector<int> result;
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<nums.size();i++){
        //     if(nums[i]==target) result.push_back(i);
        // }
        for(int i=countLessThanTarget ; i< countLessThanTarget + TargetTotalCount;i++){
            result.push_back(i);
        }
        return result;
    }
};
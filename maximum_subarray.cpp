class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int max=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if (sum<0) sum=0;
            sum+=nums[i];
            max=max>sum?max:sum;
        }
        return max;

    }
};
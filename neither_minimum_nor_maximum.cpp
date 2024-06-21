class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int minimum=nums[0],maximum=nums[0];
        for(int i=1; i<n;i++){
            minimum=min(minimum,nums[i]);
            maximum=max(maximum,nums[i]);
        }
        for(auto it:nums){
            if(it!=maximum && it!=minimum) return it;
        }
        return -1;
    }
};
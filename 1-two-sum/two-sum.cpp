class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>
            arr;   // vector to store the real array values and their indices
        int f = 0; // first pointer
        int l = nums.size() - 1; // last pointer
        for (int i = 0; i < nums.size();
             i++) { // pushing value:index into vector
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end()); // sort the array toapply two-pointer

        while (f < l) {
            int sum = arr[f].first + arr[l].first;
            if (arr[f].first + arr[l].first == target) {
                return {arr[f].second, arr[l].second};
            } else if (sum < target)
                f++;
            else
                l--;
        }

        return {};
    }
};
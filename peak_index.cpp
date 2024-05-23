class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<3) return -1;
        for(int i=0;i<arr.size();i++)
            if(arr[i]>arr[i+1]) return i;

        return -1;
    }
};
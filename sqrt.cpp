class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int low=0;
        int high=x;
        while(low<=high){
            long long mid=(low+high)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high=mid-1;
            else low=mid+1;
        }

        return high;
    }
};
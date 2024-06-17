class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 0) return false;
        for(int div=2;div*div<=c;div++){
            if(c%div==0){
                int exp=0;
                while(c%div==0){
                    exp++;
                    c/=div;
                }
                if(div%4==3 && exp % 2 !=0) return false;
            }
        }
            return c%4!=3;
        }

};
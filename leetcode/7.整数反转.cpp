/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        long long s=0;
        while(x){
            s=s*10+x%10;
            x/=10;
        }
        if(s>INT_MAX || s<INT_MIN) return 0;
        else return s;
    }
};
// @lc code=end


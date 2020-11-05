// https://leetcode.com/problems/climbing-stairs/
// 
// You are climbing a stair case. It takes n steps to reach to the top.
// 
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// 
// Example 1:
// 
// Input: 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:
// 
// Input: 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step

class Solution {
public:
    int climbStairs(int n) {
        if(n == 0) {
            return 0;
        } else if(n == 1) {
            return 1;
        } else if(n == 2) {
            return 2;
        } else {
            int a = 0;
            if(mp.find(n - 1) == mp.end()) {
                a = climbStairs(n - 1);
                mp[n - 1] = a;
            } else {
                a = mp[n - 1];
            }
            int b = 0;
            if(mp.find(n - 2) == mp.end()) {
                b = climbStairs(n - 2);
                mp[n - 2] = b;
            } else {
                b = mp[n - 2];
            }
            return a + b; 
        }
    }
private:
    std::unordered_map<int, int> mp;
};

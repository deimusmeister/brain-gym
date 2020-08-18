// https://leetcode.com/problems/maximum-69-number/
// 
// Given a positive integer num consisting only of digits 6 and 9.
// 
// Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
// 
//  
// 
// Example 1:
// 
// Input: num = 9669
// Output: 9969
// Explanation: 
// Changing the first digit results in 6669.
// Changing the second digit results in 9969.
// Changing the third digit results in 9699.
// Changing the fourth digit results in 9666. 
// The maximum number is 9969.
// Example 2:
// 
// Input: num = 9996
// Output: 9999
// Explanation: Changing the last digit 6 to 9 results in the maximum number.
// Example 3:
// 
// Input: num = 9999
// Output: 9999
// Explanation: It is better not to apply any change.
//  
// 
// Constraints:
// 
// 1 <= num <= 10^4
// num's digits are 6 or 9.


class Solution {
public:
    int maximum69Number (int num) {
        auto number = num;
        
        auto index = 0;
        auto lastSix = -1;
        while(number != 0) {
            auto digit = number % 10;
            if (digit == 6) {
                lastSix = index;
            }
            ++index;
            number = number / 10;
        }
        if(lastSix != -1) {
            int patch = 1;
            for(size_t i = 0; i < lastSix; ++i) {
                patch *= 10;
            }
            num = num + 3 * patch;
        }
        return num;
    }
};
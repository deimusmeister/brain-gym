// https://leetcode.com/problems/sort-array-by-parity/
// 
// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
// 
// You may return any answer array that satisfies this condition.
// 
//  
// 
// Example 1:
// 
// Input: [3,1,2,4]
// Output: [2,4,3,1]
// The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
//  
// 
// Note:
// 
// 1 <= A.length <= 5000
// 0 <= A[i] <= 5000


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int count = 0;
        int n = A.size() - 1;
        for(size_t i = 0; i < A.size(); ++i) {
            while(A[i] % 2 == 1) {
                if(i + count == n) {
                    break;
                }
                std::swap(A[i], A[n - count]);
                ++count;
            }
            if (i + count == n) {
                break;
            }
        }
        return A;
    }
};

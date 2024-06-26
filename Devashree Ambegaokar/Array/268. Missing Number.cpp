
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sum = accumulate(begin(nums), end(nums), 0);
       int total = n*(n+1)/2;
       return total-sum;
    }
};
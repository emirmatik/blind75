/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/

int maxSubArray(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    
    int total = 0, maximum = INT_MIN;
    
    for (int& num : nums) {
        total += num;
        
        maximum = max(total, maximum);
        total = max(total, 0);
    }
    
    return maximum;
}
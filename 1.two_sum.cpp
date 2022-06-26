// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    
    for (int i = 0; i < nums.size(); i++) {
        int rem = m[nums[i]];
        
        if (rem != 0) {
            return { i, rem - 1 };
        } else {
            m[target - nums[i]] = i + 1;
        }
    }
    
    return {-1, -1};
}
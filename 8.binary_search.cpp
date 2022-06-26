/* 
Given an array of integers nums which is sorted in ascending order, and an integer target, 
write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
*/

int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, index, num;
    
    while (l <= r) {
        index = (r + l) / 2;
        num = nums[index];
        
        if (num == target) {
            return index;
        } else if (num > target) {
            r = index - 1;
        } else {
            l = index + 1;
        }
    }
    
    return -1; 
}


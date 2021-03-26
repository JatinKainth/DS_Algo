class Solution {
public:
    int findPivot(vector<int> nums) {
        int low = 0, high = nums.size()-1;
        int mid = (low + high)/ 2;

        while(low < high) {
            if (nums[mid] > nums[mid+1]) return mid;

            if (nums[mid] > nums[low]) low = mid;
            else high = mid;
            mid = (low + high)/ 2;
        }
        return mid;
    }

    int findTarget(vector<int> nums, int low, int high, int target) {
        while (low <= high) {
            int mid = (low + high)/ 2;

            if (target == nums[mid]) return mid;
            else if (target > nums[mid]) low = mid+1;
            else high = mid-1;
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) 
            return (target == nums[0]? 0: -1);

        if (nums[0] <= nums[nums.size()-1]) 
            return findTarget(nums, 0, nums.size()-1, target);
        int pivot = findPivot(nums);

        int ans = findTarget(nums, 0, pivot, target);
        if (ans == -1) ans = findTarget(nums, pivot+1, nums.size()-1, target);
        return ans;
    }
};
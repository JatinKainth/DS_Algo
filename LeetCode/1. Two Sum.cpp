class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> arr;
        vector<int> ans;
        
        for (int i = 0; i < nums.size(); i++) {
            int secondNumber = target - nums[i];
            
            if (arr.count(secondNumber) == 1) {
                ans.push_back(arr[secondNumber]);
                ans.push_back(i);
                return ans;
            }
            arr[nums[i]] = i;
        }
        return ans;
    }
};
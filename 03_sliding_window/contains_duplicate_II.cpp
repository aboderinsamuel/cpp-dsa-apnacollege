class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window; // holds at most k elements
        for (int i = 0; i < nums.size(); i++) {
            if (window.count(nums[i])) return true; // duplicate found
            window.insert(nums[i]);
            if (window.size() > k) {
                window.erase(nums[i - k]); // keep only last k elements
            }
        }
        return false;
    }
};

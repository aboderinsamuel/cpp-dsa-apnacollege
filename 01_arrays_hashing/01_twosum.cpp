#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;
        for (int i=0; i<nums.size(); i++) {
            int complement = target - nums[i];
            if (hashmap.find(complement) != hashmap.end()) {
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
// Time: O(n) (Single pass through the array)
// Space: O(n) (Hash map storage)

int main() {
    vector<int> nums = {2,7, 11, 99, 8, 15};
    Solution sol;
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << " The answer is: ";
    for (int indexes : result) {
        cout << indexes << ", ";
    }
    cout << endl;
    return 0;
};
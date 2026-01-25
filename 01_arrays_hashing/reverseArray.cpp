#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& nums) {
        reverse(nums.begin(), nums.end());
    }
    void reverseArray2(int arr[], int n) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 4, 5 };

    Solution sol;
    sol.reverseArray(nums);
    sol.reverseArray2(nums2.data(), nums2.size());

    for (int num : nums) cout << num << " ";
    cout << endl;
    for (int num: nums2) cout << num << " ";
    return 0;

}
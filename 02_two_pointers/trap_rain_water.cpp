#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int left = 0, right = height.size() - 1;
        int left_max = height[left], right_max = height[right];
        int trapped_water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                left++;
                left_max = max(left_max, height[left]);
                trapped_water += left_max - height[left];
            } else {
                right--;
                right_max = max(right_max, height[right]);
                trapped_water += right_max - height[right];
            }
        }

        return trapped_water;
    }
};

int main() {
    Solution sol;

    vector<int> heights1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped water, heights1: " << sol.trap(heights1) << endl;  // Expected: 6

    vector<int> heights2 = {4,2,0,3,2,5};
    cout << "Trapped water, heights2: " << sol.trap(heights2) << endl;  // Expected: 9

    return 0;
}

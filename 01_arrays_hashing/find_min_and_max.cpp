#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    void swapito(vector<int>& nums) {
        int min = INT_MAX;
        int max = INT_MIN;

        for (int num : nums) {
            if (num < min) min = num;
            if (num > max) max = num;
        }
        cout << "The minimum value is: "<< min<< " and the maximum value is: "<< max << endl;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 88};
    sol.swapito(nums);
    return 0;

}
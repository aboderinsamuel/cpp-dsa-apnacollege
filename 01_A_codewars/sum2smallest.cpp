#include <climits>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    pair<int, int> twoSmallnumbers(const vector<int>& numbers) {

        if (numbers.size() < 2) return{0,0};

        int min1 = INT_MAX, min2 = INT_MAX;
        for (int num : numbers) {
            if (num < min1) {
                min2 = min1;
                min1 = num;
            }
            else if (num < min2) {
                min2 = num;
            }
        }
        return {min1, min2};
    }
    long long sumTwoSmallest(const vector<int>& numbers) {
        auto p = twoSmallnumbers(numbers);
        return p.first + p.second;
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {980008119, 999012899, 299005, 787878700, 78777777};
    auto [min1, min2] = sol.twoSmallnumbers(numbers);
    cout << "num1: " << min1 << ", num 2: "<< min2 << ", sum: " << sol.sumTwoSmallest(numbers) << endl;
    return 0;

};
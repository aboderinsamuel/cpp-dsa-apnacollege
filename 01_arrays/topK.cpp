#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == 0) return {};

        unordered_map<int,int> freq;
        for (int num : nums) freq[num]++;

        int max_freq = 0;
        for (auto& [num, count] : freq) {
            max_freq = max(max_freq, count);
        }

        vector<vector<int>> buckets(max_freq + 1);
        for (auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        vector<int> result;
        for (int i = max_freq; i >= 1 && result.size() < k; --i) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};

int main() {
    Solution freqTest;
    cout << "=== TOP K FREQUENT TESTS ===\n";

    vector<int> nums1 = {1,1,1,2,2,3};
    int k1 = 2;
    vector<int> result1 = freqTest.topKFrequent(nums1, k1);
    cout << "Test 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    vector<int> nums2 = {1,2,3,4,5};
    int k2 = 3;
    vector<int> result2 = freqTest.topKFrequent(nums2, k2);
    cout << "Test 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    vector<int> nums3 = {1,1,2,2,3,3,4,4,5,5};
    int k3 = 5;
    vector<int> result3 = freqTest.topKFrequent(nums3, k3);
    cout << "Test 3: ";
    for (int num : result3) cout << num << " ";
    cout << endl;

    vector<int> nums4 = {1,1,1,1};
    int k4 = 0;
    vector<int> result4 = freqTest.topKFrequent(nums4, k4);
    cout << "Test 4 (k=0): ";
    for (int num : result4) cout << num << " ";
    cout << endl;

    return 0;
}

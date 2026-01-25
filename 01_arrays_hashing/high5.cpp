#include<iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>>  highFive(vector<vector<int>>& k) {
        vector<vector<int>> result;
        for (auto& student : k) {
            priority_queue<int, vector<int>, greater<int>> minHeap;
            for (int score : student) {
                minHeap.push(score);
                if (minHeap.size() > 2) minHeap.pop();
            }
            int sum = 0;
            while (!minHeap.empty()) sum += minHeap.top();
            int avg = sum / 2;
            result.push_back({avg});
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> k = {{1,2,3,4,5,6}, {5,6,7,8,99}};
    vector<vector<int>> result = sol.highFive(k);
    cout << result.size() << endl;
};


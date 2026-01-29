#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int answer = right;

        while (left <= right) {
            int k = left + (right - left) / 2;  // current speed
            long long hoursUsed = 0;

            // Calculate hours needed with speed k
            for (int pile : piles) {
                hoursUsed += (pile + k - 1) / k;  // ceil division
            }

            if (hoursUsed <= h) {
                answer = k;       // possible answer
                right = k - 1;   // try smaller speed
            } else {
                left = k + 1;    // need faster speed
            }
        }

        return answer;
    }
};

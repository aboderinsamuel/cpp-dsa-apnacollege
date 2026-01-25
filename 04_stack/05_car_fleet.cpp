// LeetCode #853: Car Fleet
// Problem: Calculate the number of car fleets that will arrive at the destination.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        int n = position.size();
        vector<pair<int, double>> cars;

        for (int i = 0; i < n; i++)
        {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end(), greater<pair<int, double>>());

        int fleets = 0;
        double maxTime = 0;

        for (auto &car : cars)
        {
            if (car.second > maxTime)
            {
                maxTime = car.second;
                fleets++;
            }
        }

        return fleets;
    }
};

int main()
{
    Solution sol;
    int target = 12;
    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};
    cout << sol.carFleet(target, position, speed) << endl;
    return 0;
}

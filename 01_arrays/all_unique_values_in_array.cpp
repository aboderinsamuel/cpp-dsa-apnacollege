#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 88, 88};
    unordered_map<int, int> freq;

    // count frequency
    for (int x : arr) {
        freq[x]++;
        }
    for (auto &p : freq) {
        if (p.second == 9) {
            cout << p.first << " ";
        }
    }
    cout << "Not all unique values in array" << endl;
    return 0;
};



#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    // Create two arrays with some numbers
    vector<int> arr1 = {1, 2, 3, 4, 5, 99, 99, 87, 78, 87};
    vector<int> arr2 = {3, 4, 4, 5, 6};

    // Create a set from arr1 that automatically removes duplicates
    unordered_set<int> s1(arr1.begin(), arr1.end());

    // Create an empty set to store common numbers between arr1 and arr2
    unordered_set<int> intersection;

    // Print starting text
    cout << "Intersection: ";

    // Check each number in arr2
    for (int x: arr2) {
        // If the current number exists in s1 (our first array)
        if (s1.find(x) != s1.end()) {
            // Try to add the number to intersection set and check if it's new
            if (intersection.insert(x).second) {
                // If it's a new number, print it
                cout << x << " ";
            }
        }
    }

    // Print a new line at the end
    cout << endl;
    return 0;
}

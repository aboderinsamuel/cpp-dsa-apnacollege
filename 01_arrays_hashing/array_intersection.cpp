#include <iostream>       // for std::cout, std::endl
#include <unordered_set>  // for std::unordered_set
#include <vector>         // for std::vector
using namespace std;

int main() {
    // 1️⃣ Define two arrays
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {3, 4, 4, 5, 6};


    unordered_set<int> s1(arr1.begin(), arr1.end());
    // Explanation:
    // - s1 now contains {1,2,3,4,5}
    // - unordered_set allows O(1) average time lookup
    // - Using iterators arr1.begin() and arr1.end() copies all elements into the set

    // 3️⃣ Create a set to store the intersection (unique elements only)
    unordered_set<int> intersection;

    cout << "Intersection: ";

    // 4️⃣ Loop through the second array
    for (int x : arr2) { // range-based for loop (C++11+)
        // Check if the element exists in the first array
        if (s1.find(x) != s1.end()) { // C++20 has .contains() instead of find()
            if (intersection.insert(x).second) {
                // unordered_set::insert returns pair<iterator,bool>
                // .second is true if insertion happened (i.e., it was not already present)
                cout << x << " ";
            }
        }
    }

    cout << endl;
    return 0;
}

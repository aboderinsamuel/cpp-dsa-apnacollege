#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution{
public:
    string odd_or_even(const vector<int>& arr)
    {
        int sum = 0;
        for(int num : arr){
            sum += num;
        }
        if(sum % 2 != 0){
            return "odd";
        }
        else return "even";
    };
};

int main() {
    Solution sol;
    vector<int> arr = {1,2,3,4,5};
    vector<int> arr2 = {99,1};
    cout << sol.odd_or_even(arr) << endl;
    cout << sol.odd_or_even(arr2) << endl;
}
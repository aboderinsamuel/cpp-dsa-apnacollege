#include <algorithm>
#include <iostream>
#include <vector>

class Solution {
private:
    uint32_t set[31251];

    uint32_t getMask(int key) {
        return 1U << (key % 32);
    }

public:
    myHashset() {
        memset(set, 0, sizeof(set));
    }
    void add(int key) {
        set[key / 32] |= getMask(key);
    }
    void remove(int key) {
        set[key / 32] &= ~getMask(key);
    }
    bool contains(int key) {
        return (set[key / 32] & getMask(key)) != 0;
    }

};
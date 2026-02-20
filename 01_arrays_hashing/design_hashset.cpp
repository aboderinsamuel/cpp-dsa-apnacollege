#include <vector>
using namespace std;

class myHashSet {
private:
    int size = 1000;
    vector<vector<int>> buckets;

    int hash(int key) {
        return key % size;
    }

public:
    myHashset() : buckets(1000){}

    void add(int key) {
        int h = hash(key);
        for (int k : buckets[h]) {
            if (k == key) return;
        }
        buckets[h].push_back(key);
    }
    void remove(int key) {
        int h = hash(key);
        auto& bucket = buckets[h];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (*it == key) {
                bucket.erase(it);
                return;
            }
        }
    }
    bool contains(int key) {
        int h = hash(key);
        for (int k : buckets[h]) {
            if (k == key) return true;
        }
        return false;
    }
};
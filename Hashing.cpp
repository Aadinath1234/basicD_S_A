#include <bits/stdc++.h>
using namespace std;

class Hashing {
    vector<list<int>> hashtable;
    int buckets;

public:
    Hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key) {
        return key % buckets; // division method
    }

    void add(int key) {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator search(int key) {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deleteKey(int key) {
        int idx = hashvalue(key);
        auto it = search(key); // store the iterator returned by search
        if (it != hashtable[idx].end()) {
            // key is present
            hashtable[idx].erase(it);
            cout << key << " is deleted" << endl;
        } else {
            cout << "Key is not present in the hashtable" << endl;
        }
    }
};

int main() {
    Hashing h(10);
    h.add(5);
    h.add(9);
    h.add(3);

    h.deleteKey(3);
    h.deleteKey(3);

    return 0;
}

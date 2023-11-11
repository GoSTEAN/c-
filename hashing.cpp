#include <iostream>
#include <unordered_map>
using namespace std;

class MyHashTable {
public:
    unordered_map<string, int> data;

    void insert(const string& key, int value) {
        data[key] = value;
    }

    int getValue(const string& key) {
        return data[key];
    }
};

int main() {
    MyHashTable myHashTable;
    myHashTable.insert("one", 1);
    myHashTable.insert("two", 2);

    cout << "Value of 'one': " << myHashTable.getValue("one") << endl;

    return 0;
}

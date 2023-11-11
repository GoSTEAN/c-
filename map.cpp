#include <iostream>
#include <map>
using namespace std;

class MyMap {
public:
    map<string, int> data;

    void insert(const std::string& key, int value) {
        data[key] = value;
    }

    int getValue(const std::string& key) {
        return data[key];
    }
};

int main() {
    MyMap myMap;
    myMap.insert("one", 1);
    myMap.insert("two", 2);

    cout << "Value of 'two': " << myMap.getValue("two") << endl;

    return 0;
}

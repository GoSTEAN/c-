#include <iostream>

class MyArray {
public:
    int* data;
    int size;

    MyArray(int sz) : size(sz), data(new int[sz]) {}

    ~MyArray() {
        delete[] data;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1);
        }
        return data[index];
    }
};

int main() {
    MyArray myArray(5);
    myArray[0] = 10;
    myArray[1] = 20;

    std::cout << "Element at index 1: " << myArray[1] << std::endl;

    return 0;
}

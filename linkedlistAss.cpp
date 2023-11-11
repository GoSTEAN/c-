// A linked list is a linear data structure, in which the element are not stored at contiguous memory locations.
// The element in a linked list are linked using pointers

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;
    myList.insert(3);
    myList.insert(7);
    myList.insert(1);
    
    myList.display(); // Output: 1 7 3

    return 0;
}



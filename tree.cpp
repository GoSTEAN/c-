#include <iostream>
#include <sstream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() : root(nullptr) {}

    void insert(int value) {
        root = insertRecursive(root, value);
    }

    TreeNode* insertRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }

    void inOrderTraversal(TreeNode* node, std::stringstream& ss) {
        if (node != nullptr) {
            inOrderTraversal(node->left, ss);
            ss << node->data << " ";
            inOrderTraversal(node->right, ss);
        }
    }

    std::string getInOrderTraversal() {
        std::stringstream ss;
        inOrderTraversal(root, ss);
        return ss.str();
    }
};

int main() {
    BinaryTree myTree;
    myTree.insert(3);
    myTree.insert(7);
    myTree.insert(1);
    myTree.insert(5);
    myTree.insert(9);

    cout << "In-order traversal result: " << myTree.getInOrderTraversal() << endl;

    return 0;
}

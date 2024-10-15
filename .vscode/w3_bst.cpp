#include <iostream>
#include <string>

using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int item) {
        key = item;
        left = right = nullptr;
    }
};

// Hàm chèn phần tử vào cây nhị phân tìm kiếm
Node* insert(Node* node, int key) {
    if (node == nullptr) return new Node(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

// Duyệt cây theo thứ tự trước (preorder)
void preorder(Node* root) {
    if (root != nullptr) {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Duyệt cây theo thứ tự sau (postorder)
void postorder(Node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main() {
    Node* root = nullptr;
    string command;
    int key;

    while (true) {
        cin >> command;
        if (command[0] == '#') break;

        if (command == "insert") {
            cin >> key;
            root = insert(root, key);
        } 
        else if (command == "preorder") {
            preorder(root);
            cout << endl;
        } 
        else if (command == "postorder") {
            postorder(root);
            cout << endl;
        }
    }

    return 0;
}

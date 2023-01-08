#import<iostream>
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    std::cout << "Pre-order traversal: ";
    // Pre-order traversal: 1 2 4 5 3
    std::cout << root->data << " ";
    std::cout << root->left->data << " ";
    std::cout << root->left->left->data << " ";
    std::cout << root->left->right->data << " ";
    std::cout << root->right->data << std::endl;

    return 0;
}

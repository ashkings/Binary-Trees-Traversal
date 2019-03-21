 #include <iostream>
 using namespace std;
struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void Postorder(struct Node* node)
{
    if (node == NULL)
        return;
    Postorder(node->left);
    Postorder(node->right);
    cout << node->data << " ";
}
void Inorder(struct Node* node)
{
    if (node == NULL)
        return;
    Inorder(node->left);
    cout << node->data << " ";
    Inorder(node->right);
}
void Preorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    Preorder(node->left);
    Preorder(node->right);
}
int main()
{
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left     = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    cout << "\nPreorder traversal of binary tree is \n";
    Preorder(root);
    cout << "\nInorder traversal of binary tree is \n";
    Inorder(root);
    cout << "\nPostorder traversal of binary tree is \n";
    Postorder(root);
    return 0;
}

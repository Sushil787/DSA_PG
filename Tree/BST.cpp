#include <iostream>  
using namespace std;  
struct Node {  
    int data;  
    Node *left;  
    Node *right;  
};  
Node* create(int item)  
{  
    Node* node = new Node;  
    node->data = item;  
    node->left = node->right = NULL;  
    return node;  
}  
/*Inorder traversal of the tree formed*/  
void inorder(Node *root)  
{  
    if (root == NULL)  
        return;  
    inorder(root->left); //traverse left subtree  
    cout<< root->data << "   "; //traverse root node  
    inorder(root->right); //traverse right subtree  
}  
Node* findMinimum(Node* cur) /*To find the inorder successor*/  
{  
    while(cur->left != NULL) {  
        cur = cur->left;  
    }  
    return cur;  
}  
Node* insertion(Node* root, int item) /*Insert a node*/  
{  
    if (root == NULL)  
        return create(item); /*return new node if tree is empty*/  
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
    return root;  
}  
void search(Node* &cur, int item, Node* &parent)  
{  
    while (cur != NULL && cur->data != item)  
    {  
        parent = cur;  
        if (item < cur->data)  
            cur = cur->left;  
        else  
            cur = cur->right;  
    }  
}  
void deletion(Node*& root, int item) /*function to delete a node*/  
{  
    Node* parent = NULL;  
    Node* cur = root;  
    search(cur, item, parent); /*find the node to be deleted*/  
    if (cur == NULL)  
        return;  
    if (cur->left == NULL && cur->right == NULL) /*When node has no children*/  
    {  
        if (cur != root)  
        {  
            if (parent->left == cur)  
                parent->left = NULL;  
            else  
                parent->right = NULL;  
        }  
        else  
            root = NULL;  
        free(cur);       
    }  
    else if (cur->left && cur->right)  
    {  
        Node* succ  = findMinimum(cur->right);  
        int val = succ->data;  
        deletion(root, succ->data);  
        cur->data = val;  
    }  
    else  
    {  
        Node* child = (cur->left)? cur->left: cur->right;  
        if (cur != root)  
        {  
            if (cur == parent->left)  
                parent->left = child;  
            else  
                parent->right = child;  
        }  
        else  
            root = child;  
        free(cur);  
    }  
}  
int main()  
{  
  Node* root = NULL;  
  root = insertion(root, 45);  
  root = insertion(root, 30);  
  root = insertion(root, 50);  
  root = insertion(root, 25);  
  root = insertion(root, 35);  
  root = insertion(root, 45);  
  root = insertion(root, 60);  
  root = insertion(root, 4);  
  printf("The inorder traversal of the given binary tree is - \n");  
  inorder(root);  
  deletion(root, 25);  
  printf("\nAfter deleting node 25, the inorder traversal of the given binary tree is - \n");  
  inorder(root);   
  insertion(root, 2);  
  printf("\nAfter inserting node 2, the inorder traversal of the given binary tree is - \n");  
  inorder(root);  
  return 0;  
}  

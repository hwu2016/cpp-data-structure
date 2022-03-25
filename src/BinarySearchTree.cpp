#include "BinarySearchTree.h"
#include <algorithm>

BinarySearchTree::BinarySearchTree(TreeNode* root)
    :root(root) {}

BinarySearchTree::~BinarySearchTree()
{
    delete root;
}

//insert a node to BST, return 0 if success
int BinarySearchTree::insert(TreeNode* node)
{
    TreeNode* p = this -> root;
    while (p)
    {
        if (node -> val > p -> val)
        {
            if (p -> right == nullptr)
            {
                p -> right = node;
                return 0;
            }
            p = p -> right;
        }
        else if (node -> val < p -> val)
        {
            if (p -> left == nullptr)
            {
                p -> left = node;
                return 0;
            }
            p = p -> left;
        }
        else if (node -> val == p -> val)
        {
            break;
        }
    }
    return 1;
}

//find the specific integer in BST
bool BinarySearchTree::find(int target)
{
    TreeNode* p = this -> root;
    while (p)
    {
        if (p -> val < target)
        {
            p = p -> right;
        }
        else if (p -> val > target)
        {
            p = p -> left;
        }
        else
        {
            return true;
        }
    }
    return false;
}

//find the max depth of BST
int BinarySearchTree::depth(TreeNode* root)
{
    if (!root) return 0;
    int lh = depth(root->left);
    int rh = depth(root->right);
    return std::max(lh, rh) + 1;
}

void inorderTraverse(TreeNode* p, std::vector<int>& l)
{
    if (!p) return;
    inorderTraverse(p -> left, l);
    l.push_back(p -> val);
    inorderTraverse(p-> right, l);
}

//list the BST elements in a vector
std::vector<int> BinarySearchTree::list()
{
    std::vector<int> l;
    inorderTraverse(root, l);
    return l;
}

int BinarySearchTree::size()
{
    return list().size();
}

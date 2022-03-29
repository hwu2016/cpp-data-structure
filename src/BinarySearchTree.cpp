#include "BinarySearchTree.h"
#include <algorithm>

BinarySearchTree::BinarySearchTree():root(nullptr){}

BinarySearchTree::~BinarySearchTree()
{
    if(this-> root)
    delete this->root;
}

//insert a node to BST, return 0 if success
int BinarySearchTree::insert(int v)
{
    if (!root)
    {
        this->root = new TreeNode(v);
        return 0;
    }
    TreeNode* p = this -> root;
    while (p)
    {
        if (p->val > v)
        {
            if (p->left) 
            {
                p = p -> left;
            } 
            else
            {
                p -> left = new TreeNode(v);
                return 0;
            }
        }
        else if (p->val < v)
        {
            if (p->right) 
            {
                p = p -> right;
            } 
            else
            {
                p -> right = new TreeNode(v);
                return 0;
            }
        }
        else 
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

TreeNode* BinarySearchTree::get_root() const
{
    return this->root;
}

#ifndef BST_H
#define BST_H

#include <vector>

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(){}
    TreeNode(int val): val(val) {}
    TreeNode(TreeNode* left, TreeNode* right, int val)
        :left(left), right(right), val(val) {} 
    ~TreeNode(){}
};


class BinarySearchTree
{
private:
    TreeNode* root;


public:
    BinarySearchTree(TreeNode*);
    ~BinarySearchTree();
    int insert(TreeNode*);
    bool find(int);
    int depth(TreeNode*);
    std::vector<int> list();
    int size();
};


#endif // !BST_H


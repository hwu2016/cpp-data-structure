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
    BinarySearchTree();
    ~BinarySearchTree();
    int insert(int);
    bool find(int);
    int depth(TreeNode*);
    std::vector<int> list();
    int size();
    TreeNode* get_root() const;
};


#endif // !BST_H

